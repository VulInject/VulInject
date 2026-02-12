static void
process_pcsamples(ProfBuffer *bufp)
{
Address		*pc_samples;
mod_info_t	*mi;
size_t		nelem = bufp->bufsize;


if (nelem == 0)
return;


pc_samples = (Address *) calloc(nelem, sizeof (Address));
if (pc_samples == NULL) {
(void) fprintf(stderr, "%s: no room for %d sample pc's\n",
cmdname, nelem);
exit(ERR_MEMORY);
}

(void) memcpy(pc_samples, (caddr_t)bufp + bufp->buffer,
nelem * sizeof (Address));


qsort(pc_samples, nelem, sizeof (Address), pc_cmp);


for (mi = &modules; mi; mi = mi->next) {
if (mi->active == FALSE)
continue;
assign_pcsamples(mi, pc_samples, nelem);
}

free(pc_samples);


n_pcsamples += nelem;
}