static int update_target(git_refdb *db, transaction_node *node)
{
git_reference *ref;
int error, update_reflog;

if (node->ref_type == GIT_REFERENCE_DIRECT) {
ref = git_reference__alloc(node->name, &node->target.id, NULL);
} else if (node->ref_type == GIT_REFERENCE_SYMBOLIC) {
ref = git_reference__alloc_symbolic(node->name, node->target.symbolic);
} else {
abort();
}

GIT_ERROR_CHECK_ALLOC(ref);
update_reflog = node->reflog == NULL;

if (node->remove) {
error =  git_refdb_unlock(db, node->payload, 2, false, ref, NULL, NULL);
} else if (node->ref_type == GIT_REFERENCE_DIRECT) {
error = git_refdb_unlock(db, node->payload, true, update_reflog, ref, node->sig, node->message);
} else if (node->ref_type == GIT_REFERENCE_SYMBOLIC) {
error = git_refdb_unlock(db, node->payload, true, update_reflog, ref, node->sig, node->message);
} else {
abort();
}

git_reference_free(ref);
node->committed = true;

return error;
}