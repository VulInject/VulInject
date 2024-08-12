#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL;
    goto VAR6;
VAR6:
    VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
    if (VAR5 == NULL) {FUN2(-1);}
    {
        size_t VAR7;
        for(VAR7 = 0; VAR7 < 100; VAR7++)
        {
            VAR5[VAR7] = 5LL;
        }
    }
    free(VAR5);
    goto VAR8;
VAR8:
    FUN3(VAR5[0]);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}