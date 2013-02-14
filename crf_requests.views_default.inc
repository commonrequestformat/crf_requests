<?php
/**
 * @file
 * crf_requests.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crf_requests_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'focal_points';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Focal Points';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cluster Focal Points';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_clusters',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_contact_job_title' => 'field_contact_job_title',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_contact_job_title']['id'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['table'] = 'field_data_field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['field'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['text'] = '([field_contact_job_title])';
  $handler->display->display_options['fields']['field_contact_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_job_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = '';
  $handler->display->display_options['fields']['field_clusters']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  /* Filter criterion: Content: Clusters (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_clusters_tid']['value'] = '';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';

  /* Display: Cluster Focal Points */
  $handler = $view->new_display('block', 'Cluster Focal Points', 'cluster_focal_points');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['focal_points'] = array(
    t('Master'),
    t('Cluster Focal Points'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('([field_contact_job_title])'),
  );
  $export['focal_points'] = $view;

  $view = new view();
  $view->name = 'ocha_focal_points';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'OCHA Focal Points';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['type'] = 'text_plain';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['type'] = 'text_plain';
  /* Field: User: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job_title']['alter']['text'] = '([field_job_title])';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_title']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: User: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    52310416 => '52310416',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_job_title' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_job_title' => 'field_job_title',
  );
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['ocha_focal_points'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('([field_job_title])'),
    t('Entity Reference'),
  );
  $export['ocha_focal_points'] = $view;

  $view = new view();
  $view->name = 'requests';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Requests';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Requests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    30037204 => '30037204',
    200153887 => '200153887',
    52310416 => '52310416',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter Requests';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 1,
      'secondary_label' => 'Advanced options',
    ),
    'field_emergencies_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'name_field_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'status' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'date_filter' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Relationship: Content: Emergencies (field_emergencies) */
  $handler->display->display_options['relationships']['field_emergencies_tid']['id'] = 'field_emergencies_tid';
  $handler->display->display_options['relationships']['field_emergencies_tid']['table'] = 'field_data_field_emergencies';
  $handler->display->display_options['relationships']['field_emergencies_tid']['field'] = 'field_emergencies_tid';
  $handler->display->display_options['relationships']['field_emergencies_tid']['label'] = 'term from emergencies';
  /* Relationship: Taxonomy term: Disaster type (field_emergency_disaster_type) */
  $handler->display->display_options['relationships']['field_emergency_disaster_type_tid']['id'] = 'field_emergency_disaster_type_tid';
  $handler->display->display_options['relationships']['field_emergency_disaster_type_tid']['table'] = 'field_data_field_emergency_disaster_type';
  $handler->display->display_options['relationships']['field_emergency_disaster_type_tid']['field'] = 'field_emergency_disaster_type_tid';
  $handler->display->display_options['relationships']['field_emergency_disaster_type_tid']['relationship'] = 'field_emergencies_tid';
  $handler->display->display_options['relationships']['field_emergency_disaster_type_tid']['label'] = 'term from emergency disaster type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Emergencies (field_emergencies) */
  $handler->display->display_options['filters']['field_emergencies_tid']['id'] = 'field_emergencies_tid';
  $handler->display->display_options['filters']['field_emergencies_tid']['table'] = 'field_data_field_emergencies';
  $handler->display->display_options['filters']['field_emergencies_tid']['field'] = 'field_emergencies_tid';
  $handler->display->display_options['filters']['field_emergencies_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_emergencies_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_emergencies_tid']['expose']['operator_id'] = 'field_emergencies_tid_op';
  $handler->display->display_options['filters']['field_emergencies_tid']['expose']['label'] = 'Emergency';
  $handler->display->display_options['filters']['field_emergencies_tid']['expose']['operator'] = 'field_emergencies_tid_op';
  $handler->display->display_options['filters']['field_emergencies_tid']['expose']['identifier'] = 'field_emergencies_tid';
  $handler->display->display_options['filters']['field_emergencies_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_emergencies_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_emergencies_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_emergencies_tid']['vocabulary'] = 'emergencies';
  /* Filter criterion: Taxonomy term: Name (name_field) */
  $handler->display->display_options['filters']['name_field_value']['id'] = 'name_field_value';
  $handler->display->display_options['filters']['name_field_value']['table'] = 'field_data_name_field';
  $handler->display->display_options['filters']['name_field_value']['field'] = 'name_field_value';
  $handler->display->display_options['filters']['name_field_value']['relationship'] = 'field_emergency_disaster_type_tid';
  $handler->display->display_options['filters']['name_field_value']['group'] = 1;
  $handler->display->display_options['filters']['name_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_field_value']['expose']['operator_id'] = 'name_field_value_op';
  $handler->display->display_options['filters']['name_field_value']['expose']['label'] = 'Disaster type';
  $handler->display->display_options['filters']['name_field_value']['expose']['operator'] = 'name_field_value_op';
  $handler->display->display_options['filters']['name_field_value']['expose']['identifier'] = 'name_field_value';
  $handler->display->display_options['filters']['name_field_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['name_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date range';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_crf_req_date.field_crf_req_date_value' => 'field_data_field_crf_req_date.field_crf_req_date_value',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'internal_request' => 'internal_request',
    'crf_request' => 'crf_request',
    'non_cluster_request' => 'non_cluster_request',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'crf';

  /* Display: Cluster-Specific Page */
  $handler = $view->new_display('page', 'Cluster-Specific Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Cluster (field_cluster) */
  $handler->display->display_options['arguments']['field_cluster_tid']['id'] = 'field_cluster_tid';
  $handler->display->display_options['arguments']['field_cluster_tid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['arguments']['field_cluster_tid']['field'] = 'field_cluster_tid';
  $handler->display->display_options['arguments']['field_cluster_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_cluster_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_cluster_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_cluster_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'crf/cluster';
  $translatables['requests'] = array(
    t('Master'),
    t('Requests'),
    t('more'),
    t('Filter Requests'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('term from emergencies'),
    t('term from emergency disaster type'),
    t('Emergency'),
    t('Disaster type'),
    t('Published'),
    t('Date range'),
    t('Page'),
    t('Cluster-Specific Page'),
    t('All'),
  );
  $export['requests'] = $view;

  return $export;
}
