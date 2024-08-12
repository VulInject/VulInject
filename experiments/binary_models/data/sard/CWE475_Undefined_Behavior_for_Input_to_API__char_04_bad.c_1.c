#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    if(VAR4)
    {
        {
            char VAR6[100] = "";
            char * VAR7 = VAR6;
            strcpy(VAR7, "");
            memcpy(VAR7 + 6, VAR7 + 4, 10*sizeof(char));
            FUN2(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}