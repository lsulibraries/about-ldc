<?php
/**
 * @file
 * meeting_minutes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function meeting_minutes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'meeting_minutes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting minutes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meeting minutes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_meeting_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['alter']['text'] = '<a href=\'[field_pdf]\'>PDF</a>';
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['type'] = 'file_url_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['path'] = '[field_pdf]';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Meeting type */
  $handler->display->display_options['fields']['field_meeting_type']['id'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['table'] = 'field_data_field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['field'] = 'field_meeting_type';
  $handler->display->display_options['fields']['field_meeting_type']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'meeting_minutes' => 'meeting_minutes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'meeting-minutes';
  $export['meeting_minutes'] = $view;

  return $export;
}
