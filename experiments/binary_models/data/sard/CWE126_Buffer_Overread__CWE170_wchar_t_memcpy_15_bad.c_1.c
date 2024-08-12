#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        wchar_t VAR4[150], VAR5[100];
        wmemset(VAR4, VAR6'', 149);
        VAR4[149] = VAR6'';
        memcpy(VAR5, VAR4, 99*sizeof(wchar_t));
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