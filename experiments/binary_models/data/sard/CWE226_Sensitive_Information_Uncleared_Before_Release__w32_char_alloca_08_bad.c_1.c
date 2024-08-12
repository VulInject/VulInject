#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    if(FUN2())
    {
        {
            char * VAR7 = (char *)FUN5(100*sizeof(char));
            size_t VAR8 = 0;
            HANDLE VAR9;
            char * VAR10 = "";
            char * VAR11 = "";
            VAR7[0] = '';
            if (fgets(VAR7, 100, stdin) == NULL)
            {
                VAR7[0] = '';
            }
            VAR8 = strlen(VAR7);
            if (VAR8 > 0)
            {
                VAR7[VAR8-1] = '';
            }
            if (FUN6(
                        VAR10,
                        VAR11,
                        VAR7,
                        VAR12,
                        VAR13,
                        &VAR9) != 0)
            {
                FUN7(VAR9);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN4();
    return 0;
}