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
  $handler->display->display_options['title'] = 'About the Louisiana Digital Library (LDL)';
  $handler->display->display_options['css_class'] = 'about-ldc';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_meeting_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['wrapper_class'] = 'meeting-list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="field-item even"><p>The Louisiana Digital Library (LDL) is the front door to Louisiana&#39;s digital cultural heritage. Members include public libraries, academic libraries, museums, and archives from arcross the state.</p>
<p>Currently, there are 25 participating institutions in the LDL. Each institution contributes the digital items and the descriptive text for their collections.</p>
<ul><li>Calcasieu Parish Public Library</li>
<li>Delgado Community College</li>
<li>East Baton Rouge Parish Library</li>
<li>Law Library of Louisiana</li>
<li>Louisiana State Archives</li>
<li>Louisiana State Museum</li>
<li>Louisiana State University</li>
<li>Louisiana State University at Alexandria</li>
<li>Louisiana State University at Shreveport</li>
<li>Louisiana State University Health Sciences Center New Orleans</li>
<li>Louisiana State University Health Sciences Center Shreveport</li>
<li>Louisiana Tech University</li>
<li>Loyola University New Orleans</li>
<li>McNeese State University</li>
<li>Nicholls State University</li>
<li>Northwestern State University</li>
<li>Southern University</li>
<li>State Library Of Louisiana</li>
<li>The Historic New Orleans Collection</li>
<li>Tulane University</li>
<li>University of Louisiana at Lafayette</li>
<li>University of Louisiana at Monroe</li>
<li>University of New Orleans</li>
<li>Vermilionville Living History Museum &amp; Folklife Park</li>
<li>Webster Parish Library</li>
</ul><p>The LDL is built with&nbsp;<a href="https://islandora.ca/" rel="nofollow">Islandora</a>, an open source digital library system based on&nbsp;<a href="http://www.fedora-commons.org/" rel="nofollow">Fedora</a>,&nbsp;<a href="https://www.drupal.org/" rel="nofollow">Drupal</a>, and&nbsp;<a href="http://lucene.apache.org/solr/" rel="nofollow">Solr</a>.</p>
<p>Information about the Louisiana Digital Consortium can be found here: <a href="http://louisianadigitalconsortium.org" target="_blank">http://louisianadigitalconsortium.org</a></p>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
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
  $handler->display->display_options['path'] = 'about-ldc';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'meeting-minutes';
  $export['meeting_minutes'] = $view;

  return $export;
}
