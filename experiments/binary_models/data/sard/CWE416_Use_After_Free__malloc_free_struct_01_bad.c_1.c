#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL;
    VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
    if (VAR5 == NULL) {FUN2(-1);}
    {
        size_t VAR6;
        for(VAR6 = 0; VAR6 < 100; VAR6++)
        {
            VAR5[VAR6].VAR7 = 1;
            VAR5[VAR6].VAR8 = 2;
        }
    }
    free(VAR5);
    FUN3(&VAR5[0]);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}