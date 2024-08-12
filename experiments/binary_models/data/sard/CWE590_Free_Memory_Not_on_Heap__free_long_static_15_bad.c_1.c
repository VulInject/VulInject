#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    VAR4 = NULL; 
    switch(6)
    {
    case 6:
    {
        long VAR5[100];
        {
            size_t VAR6;
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR5[VAR6] = 5L;
            }
        }
        VAR4 = VAR5;
    }
    break;
    default:
        break;
    }
    FUN2(VAR4[0]);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}