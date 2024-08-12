#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    int VAR4;
    VAR4 = -1;
    if(VAR2)
    {
        fscanf(stdin, "", &VAR4);
    }
    if(VAR2)
    {
        FUN2(100 / VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}