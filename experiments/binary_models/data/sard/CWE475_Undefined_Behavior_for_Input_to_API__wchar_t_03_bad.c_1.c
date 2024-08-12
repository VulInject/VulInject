#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(5==5)
    {
        {
            wchar_t VAR4[100] = VAR5"";
            wchar_t * VAR6 = VAR4;
            wcscpy(VAR6, VAR5"");
            memcpy(VAR6 + 6, VAR6 + 4, 10*sizeof(wchar_t));
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