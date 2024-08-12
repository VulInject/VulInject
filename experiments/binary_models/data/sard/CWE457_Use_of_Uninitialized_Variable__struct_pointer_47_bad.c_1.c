#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    if(FUN2())
    {
        ; 
    }
    else
    {
        VAR5 = (VAR4 *)malloc(sizeof(VAR4));
        if (VAR5 == NULL) {FUN3(-1);}
        VAR5->VAR6 = 5;
        VAR5->VAR7 = 6;
    }
    if(FUN2())
    {
        FUN4(VAR5->VAR6);
        FUN4(VAR5->VAR7);
    }
    else
    {
        VAR5 = (VAR4 *)malloc(sizeof(VAR4));
        if (VAR5 == NULL) {FUN3(-1);}
        VAR5->VAR6 = 5;
        VAR5->VAR7 = 6;
        FUN4(VAR5->VAR6);
        FUN4(VAR5->VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}