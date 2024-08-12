#VAR1 ""
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
        if (VAR3 == NULL) {FUN2(-1);}
        int64_t VAR4 = *VAR3; 
        free(VAR3);
        FUN3(VAR4);
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}