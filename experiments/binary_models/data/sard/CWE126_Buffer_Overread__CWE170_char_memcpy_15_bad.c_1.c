#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char VAR4[150], VAR5[100];
        memset(VAR4, '', 149);
        VAR4[149] = '';
        memcpy(VAR5, VAR4, 99*sizeof(char));
        FUN2(VAR5);
    }
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