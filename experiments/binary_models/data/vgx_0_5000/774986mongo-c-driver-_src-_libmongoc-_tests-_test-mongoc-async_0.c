test_hello_helper (mongoc_async_cmd_t *acmd,
mongoc_async_cmd_result_t result,
const bson_t *bson,
int64_t duration_usec)
{
struct result *r = (struct result *) acmd->data;
bson_iter_t iter;
bson_error_t *error = &acmd->error;

BSON_UNUSED (duration_usec);


if (result == MONGOC_ASYNC_CMD_CONNECTED) {
return;
}

if (result != MONGOC_ASYNC_CMD_SUCCESS) {
fprintf (stderr, "error: %s\n", error->message);
}
ASSERT_CMPINT (result, ==, MONGOC_ASYNC_CMD_SUCCESS);

BSON_ASSERT (bson_iter_init_find (&iter, bson, "serverId"));
BSON_ASSERT (BSON_ITER_HOLDS_INT32 (&iter));
r->server_id = bson_iter_int32 (&iter);
r->finished = true;
}