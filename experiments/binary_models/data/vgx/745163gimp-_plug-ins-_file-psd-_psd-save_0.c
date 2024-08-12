FUN1 (VAR1 *VAR2,
gint32  VAR3,
VAR1 *VAR4)
{
gint32  VAR5 = VAR3;
gint    VAR6, VAR7;

VAR3 = 0;
while (VAR5 > 0)
{


VAR6 = 0;
while ((VAR6 < 128) &&
(VAR5 - VAR6 > 0) &&
(VAR2[0] == VAR2[VAR6]))
VAR6++;

if (VAR6 > 1)              
{

*VAR4++ = -(VAR6 - 1);
*VAR4++ = *VAR2;

VAR2 += VAR6;
VAR5 -= VAR6;
VAR3 += 2;
}
else       
{
VAR6 = 0;
while ((VAR6 < 128)                 &&
(VAR5 - (VAR6 + 1) > 0) &&
(VAR2[VAR6] != VAR2[VAR6 + 1] ||
VAR5 - (VAR6 + 2) <= 0 || VAR2[VAR6] != VAR2[VAR6+2]))
VAR6++;



if (VAR5 == 1)
{
VAR6 = 1;
}

if (VAR6 > 0)               
{
*VAR4++ = VAR6 - 1;
for (VAR7 = 0; VAR7 < VAR6; VAR7++)
{
*VAR4++ = VAR2[VAR7];
}
VAR2 += VAR6;
VAR5 -= VAR6;
VAR3 += VAR6 + 1;
}

}
}
return VAR3;
}