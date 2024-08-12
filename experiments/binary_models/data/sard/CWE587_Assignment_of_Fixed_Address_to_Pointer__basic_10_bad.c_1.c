#VAR1 ""
void FUN1()
{
    if(VAR2)
    {
        {
            char *VAR3 = (char*)0x400000;
            FUN2(*VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}