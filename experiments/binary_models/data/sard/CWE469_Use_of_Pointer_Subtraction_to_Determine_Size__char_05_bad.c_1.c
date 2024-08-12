#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1()
{
    if(VAR5)
    {
        {
            char VAR7[] = VAR4;
            char VAR8[] = VAR4;
            char * VAR9;
            size_t VAR10;
            VAR9 = strchr(VAR7, '');
            if (VAR9 == NULL)
            {
                FUN2(1);
            }
            VAR10 = (VAR11)(VAR9 - VAR8);
            FUN3(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}