T?o 1 n�t c� tru?ng Key b?ng x


TNode* CreateTNode(int key)

{

TNode *p = new TNode;

if (p==NULL)

exit(1);

p->key = key;

p->pLeft = p->pRight = NULL;

return p;

}


Th�m 1 n�t v�o c�y nh? ph�n t�m ki?m (Sau khi th�m c�y d?m b?o l� c�y nh? ph�n t�m ki?m)


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

Xo� 1 n�t c� Key b?ng x tr�n c�y

- X�a 1 ph?n t? tr�n c�y ph?i d?m b?o di?u ki?n r�ng bu?c c?a C�y nh? ph�n t�m ki?m

- C� 3 tru?ng h?p khi h?y 1 n�t tr�n c�y

� TH1: X l� n�t l�. Ta xo� n�t l� m� kh�ng �nh hu?ng d?n c�c n�t kh�c ttr�n c�y

� TH2: X ch? c� 1 c�y con (c�y con tr�i ho?c c�y con ph?i). Tru?c khi xo� x ta m�c n?i cha c?a X v?i con duy nh?t c�a X.

� TH3: X c� d?y d? 2 c�y con. Ta d�ng c�ch xo� gi�n ti?p

� Ta d�ng c�ch h?y gi�n ti?p, do X c� 2 c�y con

� Thay v� h?y X ta t�m ph?n t? th? m?ng Y. N�t Y c� t?i da 1 c�y con.

� Th�ng tin luu t?i n�t Y s? du?c chuy?n l�n luu t?i X.

� Ta ti?n h�nh xo� h?y n�t Y (xo� Y gi?ng 2 tru?ng h?p d?u)

� C�ch t�m n�t th? m?ng Y cho X: C� 2 c�ch

� C1: N�t Y l� n�t c� kho� nh? nh?t (tr�i nh?t) b�n c�y con ph?i X

� C2: N�t Y l� n�t c� kho� l?n nh?t (ph?i nh?t) b�n c�y con tr�i c?a X





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


void Replace(TREE &p, TREE &T) //T�m ph?n t? tr�i nh?t (nh? nh?t) tr�n c�y con b�n ph?i

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

T�m 1 n�t c� kho� b?ng x tr�n c�y
TNode* Search(TREE T, int x) //Kh�ng d�ng d? quy

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


TNode* SearchRecursive(TREE T,int x) //D�ng d? quy

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
