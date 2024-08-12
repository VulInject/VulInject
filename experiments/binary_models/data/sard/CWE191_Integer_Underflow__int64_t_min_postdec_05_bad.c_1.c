#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    int64_t VAR4;
    VAR4 = 0LL;
    if(VAR2)
    {
        VAR4 = VAR5;
    }
    if(VAR2)
    {
        {
            VAR4--;
            int64_t VAR6 = VAR4;
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