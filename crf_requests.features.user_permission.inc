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

  // Exported permission: access print.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'print',
  );

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

  // Exported permission: delete terms in emergencies.
  $permissions['delete terms in emergencies'] = array(
    'name' => 'delete terms in emergencies',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in locations.
  $permissions['delete terms in locations'] = array(
    'name' => 'delete terms in locations',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in organizations.
  $permissions['delete terms in organizations'] = array(
    'name' => 'delete terms in organizations',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'taxonomy',
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

  // Exported permission: edit terms in emergencies.
  $permissions['edit terms in emergencies'] = array(
    'name' => 'edit terms in emergencies',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in locations.
  $permissions['edit terms in locations'] = array(
    'name' => 'edit terms in locations',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in organizations.
  $permissions['edit terms in organizations'] = array(
    'name' => 'edit terms in organizations',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'taxonomy',
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

  return $permissions;
}
