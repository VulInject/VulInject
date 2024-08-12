static struct VAR1 *FUN1(v4l2_std_id VAR2)
{
unsigned int VAR3;
for (VAR3 = 0; VAR3 < FUN2(VAR4); VAR3++) {
if (VAR4[VAR3].VAR2 & VAR2) {
return VAR4 + VAR3;
}
}
return NULL;
}