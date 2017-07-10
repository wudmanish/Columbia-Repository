void PtrExample()

	int a = 1;
	int b = 2;
	int c = 3;
	
	int *p;
	int *q;

	p= &a;
	q= &b;
	
	c = *p;
	p = q;
	*p = 13;

void BadPointer()

	int *p;

	*p = 42;
