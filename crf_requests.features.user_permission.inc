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

  // Exported permission: node-specific print configuration.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: view advanced help index.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help popup.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help topic.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view any unpublished crf_request content.
  $permissions['view any unpublished crf_request content'] = array(
    'name' => 'view any unpublished crf_request content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
