#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SRC VAR4""
void FUN1()
{
    if(FUN2())
    {
        {
            wchar_t VAR5[100] = VAR4"";
            wchar_t * VAR6 = VAR5;
            swscanf(VAR7, VAR4"", VAR6);
        }
    }
    else
    {
        {
            wchar_t VAR5[100] = VAR4"";
            wchar_t * VAR6 = VAR5;
            if (swscanf(VAR7, VAR4"", VAR6) == VAR8)
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}