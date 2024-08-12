#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL; 
    VAR4 = (char *)malloc(20*sizeof(char));
    switch(6)
    {
    case 6:
        strcpy(VAR4, "");
        FUN2(VAR4);
        free(VAR4);
        break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}