malloc_pool_display (mallocPool p UNUSED)
{
mallocPool q;
mallocArea_ a;

fprintf (dmpout, "Pool \"%s\": bytes allocated=%lu, freed=%lu, old sizes=%lu, new sizes\
=%lu,\n   allocations=%lu, frees=%lu, resizes=%lu, uses=%lu\n   Subpools:\n",
p->name, p->allocated, p->freed, p->old_sizes, p->new_sizes, p->allocations,
p->frees, p->resizes, p->uses);

for (q = p->eldest; q != (mallocPool) & p->eldest; q = q->next)
fprintf (dmpout, "      \"%s\"\n", q->name);

fprintf (dmpout, "   Storage areas:\n");

for (a = p->first; a != (mallocArea_) & p->first; a = a->next)
{
fprintf (dmpout, "      ");
malloc_display_ (a);
}
}