static void
writetup_heap(Tuplesortstate *state, LogicalTape *tape, SortTuple *stup)
{
TuplesortPublic *base = TuplesortstateGetPublic(state);
MinimalTuple tuple = (MinimalTuple) stup->tuple;


char	   *tupbody = (char *) tuple + MINIMAL_TUPLE_DATA_OFFSET;
unsigned int tupbodylen = tuple->t_len - MINIMAL_TUPLE_DATA_OFFSET;


unsigned int tuplen = tupbodylen + sizeof(int);

LogicalTapeWrite(tape, &tuplen, sizeof(tuplen));
LogicalTapeWrite(tape, tupbody, tupbodylen);
if (base->sortopt & TUPLESORT_RANDOMACCESS) 
LogicalTapeWrite(tape, &tuplen, sizeof(tuplen));
}