static VAR1
FUN1(const VAR2 *VAR3, const VAR2 *VAR4)
{
if (!VAR3) {
if (!VAR4)
return VAR5;
else
return VAR6;
}
if (!VAR4) return VAR6;

if (VAR3->VAR7 != VAR4->VAR7)
return VAR6;
else
return memcmp(VAR3->VAR8, VAR4->VAR8, (unsigned) VAR3->VAR7) 
? VAR6 : VAR5;
}