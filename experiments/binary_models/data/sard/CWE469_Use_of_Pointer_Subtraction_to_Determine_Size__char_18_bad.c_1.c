#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    goto VAR5;
VAR5:
    {
        char VAR6[] = VAR4;
        char VAR7[] = VAR4;
        char * VAR8;
        size_t VAR9;
        VAR8 = strchr(VAR6, '');
        if (VAR8 == NULL)
        {
            FUN2(1);
        }
        VAR9 = (VAR10)(VAR8 - VAR7);
        FUN3(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}