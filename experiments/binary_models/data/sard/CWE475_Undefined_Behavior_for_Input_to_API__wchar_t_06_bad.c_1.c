#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    if(VAR4==5)
    {
        {
            wchar_t VAR5[100] = VAR6"";
            wchar_t * VAR7 = VAR5;
            wcscpy(VAR7, VAR6"");
            memcpy(VAR7 + 6, VAR7 + 4, 10*sizeof(wchar_t));
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