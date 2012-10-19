<?php
/**
 * @file
 * crf_requests.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_requests_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crf_requests_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_date_format_types().
 */
function crf_requests_date_format_types() {
  $format_types = array();
  // Exported date format type: request
  $format_types['request'] = 'Request';
  return $format_types;
}

/**
 * Implements hook_node_info().
 */
function crf_requests_node_info() {
  $items = array(
    'crf_request' => array(
      'name' => t('CRF Request'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_workflow_default_workflows().
 */
function crf_requests_workflow_default_workflows() {
  $workflows = array();

  // Exported workflow: Request Workflow
  $workflows['Request Workflow'] = array(
    'name' => 'Request Workflow',
    'tab_roles' => '',
    'options' => 'a:3:{s:16:"comment_log_node";i:0;s:15:"comment_log_tab";i:0;s:13:"name_as_title";i:0;}',
    'states' => array(
      0 => array(
        'state' => '(creation)',
        'weight' => '-50',
        'sysid' => '1',
        'status' => '1',
      ),
      1 => array(
        'state' => 'Open',
        'weight' => '0',
        'sysid' => '0',
        'status' => '1',
      ),
      2 => array(
        'state' => 'Close',
        'weight' => '0',
        'sysid' => '0',
        'status' => '1',
      ),
    ),
    'transitions' => array(
      0 => array(
        'roles' => 'workflow_features_author_name',
        'state' => '(creation)',
        'target_state' => 'Open',
      ),
      1 => array(
        'roles' => 'workflow_features_author_name',
        'state' => 'Open',
        'target_state' => 'Close',
      ),
      2 => array(
        'roles' => 'workflow_features_author_name',
        'state' => 'Close',
        'target_state' => 'Open',
      ),
    ),
    'node_types' => array(
      0 => 'crf_request',
    ),
  );

  return $workflows;
}
