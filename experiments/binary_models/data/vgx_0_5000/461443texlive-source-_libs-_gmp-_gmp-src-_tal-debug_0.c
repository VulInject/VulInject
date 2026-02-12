__gmp_tmp_debug_alloc (const char *file, int line, int dummy,
struct tmp_debug_t **markp,
const char *decl_name, size_t size)
{
struct tmp_debug_t        *mark = *markp;
struct tmp_debug_entry_t  *p;

ASSERT_ALWAYS (size >= 1);

if (mark == NULL)
{
__gmp_assert_header (file, line);
fprintf (stderr, "GNU MP: TMP_ALLOC without TMP_MARK(%s)\n", decl_name);
abort ();
}

p = __GMP_ALLOCATE_FUNC_TYPE (1, struct tmp_debug_entry_t);
p->size = size;
p->block = (*__gmp_allocate_func) (size);
p->next = mark->list;
mark->list = p;
return p->block;
}