memalign (size_t VAR1, size_t VAR2)
{
if (VAR1 < 4)

return malloc (VAR2);

return memalign (VAR1, VAR2);
}