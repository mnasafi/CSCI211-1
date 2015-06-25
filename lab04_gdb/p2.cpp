void f(int b)
{
    // the (int *) turns the integer 42 into an integer address
    int *ptr = (int *) 42;   

    *ptr = 42;
}

void g(int a)
{
    f(a+10);
}

int
main()
{
    g(42);
}
