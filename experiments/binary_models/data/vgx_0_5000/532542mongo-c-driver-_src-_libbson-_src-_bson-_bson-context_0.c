_bson_context_init_random (bson_context_t *context, bool init_seq)
{

static int64_t s_rand_call_counter = INT64_MIN;


uint64_t digest[2] = {0};
uint64_t key[2] = {0};

struct _init_rand_params rand_params;


memset (&rand_params, 0, sizeof rand_params);
bson_gettimeofday (&rand_params.time);
rand_params.pid = _bson_getpid ();
_bson_context_get_hostname (rand_params.hostname);
rand_params.rand_call_counter = bson_atomic_int64_fetch_add (
&s_rand_call_counter, 1, bson_memory_order_seq_cst);


memcpy (key, &rand_params, sizeof key);
key[1] = ~key[0];


_siphash (&rand_params, sizeof rand_params, key, digest);


memcpy (context->randomness, digest, sizeof context->randomness);
if (init_seq) {
memcpy (&context->seq32, digest + 1, sizeof context->seq32);
memcpy (&context->seq64, digest + 1, sizeof context->seq64);

context->seq32 &= ~UINT32_C (0xf0000f);
context->seq64 &= ~UINT64_C (0xf0000f);
}


context->pid = rand_params.pid;
}