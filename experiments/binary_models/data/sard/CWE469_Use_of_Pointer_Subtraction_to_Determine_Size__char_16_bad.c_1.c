#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    while(1)
    {
        {
            char VAR5[] = VAR4;
            char VAR6[] = VAR4;
            char * VAR7;
            size_t VAR8;
            VAR7 = strchr(VAR5, '');
            if (VAR7 == NULL)
            {
                FUN2(1);
            }
            VAR8 = (VAR9)(VAR7 - VAR6);
            FUN3(VAR8);
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}