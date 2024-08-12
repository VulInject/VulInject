#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        {
            wchar_t VAR4[100] = VAR5"";
            wchar_t * VAR6 = VAR4;
            wcscpy(VAR6, VAR5"");
            memcpy(VAR6 + 6, VAR6 + 4, 10*sizeof(wchar_t));
            FUN3(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}