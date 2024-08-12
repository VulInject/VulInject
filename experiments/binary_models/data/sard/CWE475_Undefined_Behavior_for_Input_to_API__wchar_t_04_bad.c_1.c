#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    if(VAR4)
    {
        {
            wchar_t VAR6[100] = VAR7"";
            wchar_t * VAR8 = VAR6;
            wcscpy(VAR8, VAR7"");
            memcpy(VAR8 + 6, VAR8 + 4, 10*sizeof(wchar_t));
            FUN2(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}