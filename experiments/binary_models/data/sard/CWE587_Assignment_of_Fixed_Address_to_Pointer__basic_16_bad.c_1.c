#VAR1 ""
void FUN1()
{
    while(1)
    {
        {
            char *VAR2 = (char*)0x400000;
            FUN2(*VAR2);
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}