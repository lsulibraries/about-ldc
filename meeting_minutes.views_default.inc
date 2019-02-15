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
  $handler->display->display_options['header']['area']['content'] = '<p>The Louisiana Digital Library (LDL) is an online library containing photographs, maps, manuscript materials, books, oral histories, and other items that document the history and culture of Louisiana. Items comes to the LDL from institutions across the state, including libraries, museums, archives, and historical organizations.</p>

<p>Currently, there are 18 participating institutions in the LDL. Each institution contributes the digital items and the descriptive text for their collections.</p>

<ul>
	<li>Louisiana State Museum (<a href="http://louisianadigitallibrary.org/lsm">LSM</a>)</li>
	<li>Louisiana State University (<a href="http://louisianadigitallibrary.org/lsu">LSU</a>)</li>
	<li>Louisiana State University at Shreveport (<a href="http://louisianadigitallibrary.org/lsus">LSUS</a>)</li>
	<li>Louisiana State University Health Sciences Center New Orleans (<a href="http://louisianadigitallibrary.org/lsuhsc">LSUHSC</a>)</li>
	<li>Louisiana State University Health Sciences Center Shreveport (<a href="http://louisianadigitallibrary.org/lsuhscs">LSUHSCS</a>)</li>
	<li>Louisiana Tech University (<a href="http://louisianadigitallibrary.org/latech">LATECH</a>)</li>
	<li>Loyola University New Orleans (<a href="http://louisianadigitallibrary.org/loyno">LOYNO</a>)</li>
	<li>McNeese State University (<a href="http://louisianadigitallibrary.org/mcneese">MCNEESE</a>)</li>
	<li>Nicholls State University (<a href="http://louisianadigitallibrary.org/nicholls">NICHOLLS</a>)</li>
	<li>Northwestern State University (<a href="http://louisianadigitallibrary.org/nsu">NSU</a>)</li>
	<li>Southern University and A and M College (<a href="http://louisianadigitallibrary.org/subr">SUBR</a>)</li>
	<li>State Library Of Louisiana (<a href="http://louisianadigitallibrary.org/state">STATE</a>)</li>
	<li>The Historic New Orleans Collection (<a href="http://louisianadigitallibrary.org/hnoc">HNOC</a>)</li>
	<li>Tulane University (<a href="http://louisianadigitallibrary.org/tulane">TULANE</a>)</li>
	<li>University of Louisiana at Lafayette (<a href="http://louisianadigitallibrary.org/ull">ULL</a>)</li>
	<li>University of Louisiana at Monroe (<a href="http://louisianadigitallibrary.org/ulm">ULM</a>)</li>
	<li>University of New Orleans (<a href="http://louisianadigitallibrary.org/uno">UNO</a>)</li>
	<li>Vermilionville Living Museum (<a href="http://louisianadigitallibrary.org/vville">VVILLE</a>)</li>
</ul>

<p>The LDL is built with&nbsp;<a href="https://islandora.ca/" rel="nofollow">Islandora</a>, an open source digital library system based on&nbsp;<a href="http://www.fedora-commons.org/" rel="nofollow">Fedora</a>,&nbsp;<a href="https://www.drupal.org/" rel="nofollow">Drupal</a>, and&nbsp;<a href="http://lucene.apache.org/solr/" rel="nofollow">Solr</a>.</p>

<p>The LDL is governed by the Louisiana Digital Consortium.</p>

<h2>About the Louisiana Digital Consortium</h2>

<p>The Louisiana Digital Consortium (LDC) is a partnership of participating Louisiana libraries, museums, archives and cultural heritage institutions. The purpose of the LDC is to be the Louisiana entity under which a variety of digital initiatives and services and cooperative programs are developed and or sponsored. The LDC provides governance and leadership to ensure the effective operation, orderly growth and fiscal sustainability of the Louisiana Digital Library and other cooperative programs.</p>

<p>There are currently 22 participating libraries, archives, museums, and historical centers participating in the LDL. Each institution contributes the digital items and the descriptive text for their collections. You will find that some of the collections, such as the Teaching History in Louisiana Project, are collaborative projects that include materials from many institutions.</p>

<h3>Executive Board</h3>
<ul>
<li>Chair: Diane Brown, State Library (dbrown@crt.la.gov)</li>
<li>Vice-Chair: Deborah Poole, Loyola</li>
<li>Immediate Past Chair: Lora Amsberryaugier, UNO</li>
<li>Treasurer: Debbie Johnson-Houston, McNeese</li>
<li>Secretary: Jeff Rubin, Tulane</li>
<li>At Large: Gina Costello, LSU</li>
</ul>

<h2>LDL Steering Committee</h2>
<p>The LDL Steering Committee works closely with the LDL Development team to ensure that the new Louisiana Digital Library has the features and look that the LDC membership wants.</p>
<p>The charge of the LDL Steering Committee is to:</p>
<ul>
	<li>Develop short and long-term goals for Islandora technical implementation and the website redesign</li>
	<li>Prioritize product feature development and releases</li>
	<li>Provide feedback to the LSU Development Team about new features and site changes</li>
	<li>Attend monthly product review meetings with the LSU Development Team in person or via web conference</li>
	<li>Communicate with all LDL stakeholders (including the LDC Board and membership) to inform of changes and to gather feedback about new features, bugs or issues, and potential enhancements.</li>
</ul>

<h3>LDL Steering Committee Members:</h3>
<ul>
<li>Chair: Jeff Rubin, Tulane</li>
<li>Member: Charlene Bonnette, State Library of Louisiana</li>
<li>Member: Gina Costello, LSU</li>
<li>Member: Elizabeth Kelly, Loyola</li>
<li>Member: Pati Threatt, McNeese</li>
<li>Member: Kent Woynowski, HNOC</li>
<li>Member: James Hodges, UNO</li>
</ul>

<h2>LDL Development Team</h2>
<p>The LDL Development Team consists of staff of LSU Libraries, primarily from the Technology Initiatives Team. As of the Spring 2018, this includes:</p>
<ul>
<li>Garrett Armstrong, Digital Projects Programmer, garmstrong@lsu.edu</li>
<li>Dave Comeaux, Web Development Librarian, davidcomeaux@lsu.edu</li>
<li>William W. Conlin, Digital Projects Programmer, wconli1@lsu.edu</li>
<li>Gina Costello, Associate Dean for Technology Initiatives, gcoste1@lsu.edu</li>
<li>Gabe Harrell, Digitization Lab Manager, jharre7@lsu.edu</li>
<li>Kyle Tanglao, User Interface Designer, ktanglao@lsu.edu</li>
<li>Scott Ziegler, Head of Digital Programs and Services, sziegler1@lsu.edu</li>
</ul>
<h5><a href="https://s3-us-west-2.amazonaws.com/ldc-documents/LDC_Bylaws_rev20151112.pdf" target="_blank">LDC Bylaws</a></h5>
<h5><a href="https://s3-us-west-2.amazonaws.com/ldc-documents/LDC_membership_form2016.pdf" target="_blank">LDC Membership Form</a></h5>';
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
