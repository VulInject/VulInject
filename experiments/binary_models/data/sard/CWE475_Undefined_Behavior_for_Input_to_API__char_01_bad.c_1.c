#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    {
        char VAR4[100] = "";
        char * VAR5 = VAR4;
        strcpy(VAR5, "");
        memcpy(VAR5 + 6, VAR5 + 4, 10*sizeof(char));
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}