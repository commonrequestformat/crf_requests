<?php
/**
 * @file
 * crf_requests.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_requests_user_default_permissions() {
  $permissions = array();

  // Exported permission: create crf_request content.
  $permissions['create crf_request content'] = array(
    'name' => 'create crf_request content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any crf_request content.
  $permissions['delete any crf_request content'] = array(
    'name' => 'delete any crf_request content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own crf_request content.
  $permissions['delete own crf_request content'] = array(
    'name' => 'delete own crf_request content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any crf_request content.
  $permissions['edit any crf_request content'] = array(
    'name' => 'edit any crf_request content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own crf_request content.
  $permissions['edit own crf_request content'] = array(
    'name' => 'edit own crf_request content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
