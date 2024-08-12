#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    goto VAR4;
VAR4:
    {
        VAR5 * VAR6 = (VAR5 *)malloc(100*sizeof(VAR5));
        if (VAR6 == NULL) {FUN2(-1);}
        VAR6[0] = 5LL;
        FUN3(VAR6[0]);
        VAR6 = (VAR5 *)realloc(VAR6, (130000)*sizeof(VAR5));
        if (VAR6 != NULL)
        {
            VAR6[0] = 10LL;
            FUN3(VAR6[0]);
            free(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}