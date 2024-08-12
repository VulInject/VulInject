bool FUN1(wchar_t VAR1)
{
if ((VAR1 == (wchar_t) 0x00ad) || 
(VAR1 == (wchar_t) 0x200e) || 
(VAR1 == (wchar_t) 0x200f) || 
(VAR1 == (wchar_t) 0xfeff))   
{
return true;
}


if ((VAR1 >= (wchar_t) 0x2066) && (VAR1 <= (wchar_t) 0x2069))
return true;


if ((VAR1 >= (wchar_t) 0x202a) && (VAR1 <= (wchar_t) 0x202e))
return true;

return false;
}