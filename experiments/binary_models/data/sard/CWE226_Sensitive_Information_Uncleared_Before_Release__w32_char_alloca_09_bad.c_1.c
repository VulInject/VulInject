#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    if(VAR7)
    {
        {
            char * VAR8 = (char *)FUN3(100*sizeof(char));
            size_t VAR9 = 0;
            HANDLE VAR10;
            char * VAR11 = "";
            char * VAR12 = "";
            VAR8[0] = '';
            if (fgets(VAR8, 100, stdin) == NULL)
            {
                VAR8[0] = '';
            }
            VAR9 = strlen(VAR8);
            if (VAR9 > 0)
            {
                VAR8[VAR9-1] = '';
            }
            if (FUN4(
                        VAR11,
                        VAR12,
                        VAR8,
                        VAR13,
                        VAR14,
                        &VAR10) != 0)
            {
                FUN5(VAR10);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}