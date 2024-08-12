#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    HANDLE VAR4;
    VAR5 *VAR6 = &VAR4;
    VAR5 *VAR7 = &VAR4;
    VAR4 = VAR8;
    {
        HANDLE VAR4 = *VAR6;
        VAR4 = FUN2("",
                          (VAR9|VAR10),
                          0,
                          NULL,
                          VAR11,
                          VAR12,
                          NULL);
        *VAR6 = VAR4;
    }
    {
        HANDLE VAR4 = *VAR7;
        if (VAR4 != VAR8)
        {
            fclose((VAR13 *)VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}