#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(VAR4)
    {
        {
            char VAR5[100] = "";
            char * VAR6 = VAR5;
            strcpy(VAR6, "");
            memcpy(VAR6 + 6, VAR6 + 4, 10*sizeof(char));
            FUN2(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}