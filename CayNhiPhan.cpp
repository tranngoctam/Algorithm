T?o 1 nút có tru?ng Key b?ng x


TNode* CreateTNode(int key)

{

TNode *p = new TNode;

if (p==NULL)

exit(1);

p->key = key;

p->pLeft = p->pRight = NULL;

return p;

}


Thêm 1 nút vào cây nh? phân tìm ki?m (Sau khi thêm cây d?m b?o là cây nh? phân tìm ki?m)


int InsertTNode(TREE &T, TNode *p)

{

if(T)

{

if(T->key == p->key)

return 0;

else if(T->key > p->key)

return InsertTNode(T->pLeft,p);

else

return InsertTNode(T->pRight,p);

}

T = p;

return 1;

}

Xoá 1 nút có Key b?ng x trên cây

- Xóa 1 ph?n t? trên cây ph?i d?m b?o di?u ki?n ràng bu?c c?a Cây nh? phân tìm ki?m

- Có 3 tru?ng h?p khi h?y 1 nút trên cây

· TH1: X là nút lá. Ta xoá nút lá mà không ành hu?ng d?n các nút khác ttrên cây

· TH2: X ch? có 1 cây con (cây con trái ho?c cây con ph?i). Tru?c khi xoá x ta móc n?i cha c?a X v?i con duy nh?t cùa X.

· TH3: X có d?y d? 2 cây con. Ta dùng cách xoá gián ti?p

• Ta dùng cách h?y gián ti?p, do X có 2 cây con

• Thay vì h?y X ta tìm ph?n t? th? m?ng Y. Nút Y có t?i da 1 cây con.

• Thông tin luu t?i nút Y s? du?c chuy?n lên luu t?i X.

• Ta ti?n hành xoá h?y nút Y (xoá Y gi?ng 2 tru?ng h?p d?u)

• Cách tìm nút th? m?ng Y cho X: Có 2 cách

ü C1: Nút Y là nút có khoá nh? nh?t (trái nh?t) bên cây con ph?i X

ü C2: Nút Y là nút có khoá l?n nh?t (ph?i nh?t) bên cây con trái c?a X





int DeleteTNode(TREE &T, int x)

{

if(T==NULL)

return 0;

if(T->key > x)

return DeleteTNode(T->pLeft,x);

else if(T->key < x)

return DeleteTNode(T->pRight,x);

else //T->key == x

{

TNode *p = T;

if (T->pLeft == NULL)

T = T->pRight;

else if (T->pRight == NULL)

T = T->pLeft;

else //T co ca 2 con

Replace(p,T->pRight);

delete p;

return 1;

}

}


void Replace(TREE &p, TREE &T) //Tìm ph?n t? trái nh?t (nh? nh?t) trên cây con bên ph?i

{

if(T->pLeft)

Replace(p,T->pLeft);

else

{

p->key = T->key;

p = T;

T = T->pRight;

}

}


void DeleteTREE(TREE &T)

{

if(T)

{

DeleteTREE(T->pLeft);

DeleteTREE(T->pRight);

delete T;

T = NULL;

}

}

Tìm 1 nút có khoá b?ng x trên cây
TNode* Search(TREE T, int x) //Không dùng d? quy

{

TNode *p = T;

while(p!=NULL)

{

if(p->key == x)

return p;

else if(p->key > x)

p = p->pLeft;

else

p = p->pRight;

}

return NULL;

}


TNode* SearchRecursive(TREE T,int x) //Dùng d? quy

{

if(T)

{

if (T->key == x)

return T;

else if(T->key > x)

return SearchRecursive(T->pLeft,x);

else

return SearchRecursive(T->pRight,x);

}

return NULL;

}
