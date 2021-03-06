<?php
/* 
 *  Copyright (c) 2009 Denic Wibowo<denicwibowo@gmail.com>.
 *  All rights reserved.
 *  
 *  This program is free software; you can redistribute it and/or modify it 
 *  under the terms of the GNU General Public License as published by the 
 *  Free Software Foundation; either version 2 of the License, or 
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful, but 
 *  WITHOUT ANY WARRANTY; without even the implied warranty of 
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General 
 *  Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License along 
 *  with this program; if not, write to the Free Software Foundation, Inc., 
 *  59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *  
 *  config.php
 *  
 *  Created on Oct 1, 2009, 1:10:09 PM
 */

class ekgConfig extends config
{
    var $rdbms = 'mysql';
    var $dbekg = array(
        'name' => 'layanan_kesehatan',
        'prefix' => '',
        'suffix' => '',
        'tbprefix' => '',
        'tbsuffix' => '',
        'host' => 'localhost',
        'user' => 'root',
        'passwd' => 'emmank'
    );
    var $hiddenfields = array(
        'id', 'id_pasien'
    );
    var $fields_form_type = array(
        'id' => 'hidden',
        'patients' => 'hidden',
        'tgl' => 'hidden',
        'irama_dasar' => 'select',
        'denyut_jantung' => 'select',
        'gelombang_p' => 'select',
        'interval_pr' => 'select',
        'qrs_axis' => 'select',
        'qrs_durasi' => 'select',
        'qrs_konfig' => 'select',
        'segmen_st' => 'select',
        'gelombang_t' => 'select',
        'q_interval' => 'select',
        'inputer' => 'hidden',
        'inputtime' => 'hedden',
        'updated' => 'hedden'
    );

    var $fieldsisarray = array(
        'irama_dasar',
        'denyut_jantung',
        'gelombang_p',
        'interval_pr',
        'qrs_axis',
        'qrs_durasi',
        'qrs_konfig',
        'segmen_st',
        'gelombang_t',
        'q_interval'
    );

    var $reftable = array(
        'irama_dasar' => array('ref_ekg_irama','irama'),
        'denyut_jantung' => array('ref_ekg_denyut_jantung', 'denyut_jantung'),
        'gelombang_p' => array('ref_ekg_gelombangP', 'gelombangP'),
        'interval_pr' => array('ref_ekg_intervalPR', 'intervalPR'),
        'qrs_axis' => array('ref_ekgQrs_axis', 'axis'),
        'qrs_durasi' => array('ref_ekgQrs_durasi', 'durasi'),
        'qrs_konfig' => array('ref_ekgQrs_konfig', 'konfig'),
        'segmen_st' => array('ref_ekgst_depresi', 'depresi'),
        'gelombang_t' => array('ref_ekg_gelombang_t', 'gelombang_t'),
        'q_interval' => array('ref_ekg_q_interval', 'q_interval')
    );
}