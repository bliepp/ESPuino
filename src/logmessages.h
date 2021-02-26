static const char stillOnlineMqtt[] PROGMEM = "MQTT: Bin noch online.";
static const char tryConnectMqttS[] PROGMEM = "Versuche Verbindung zu MQTT-Broker aufzubauen";
static const char mqttOk[] PROGMEM = "MQTT-Session aufgebaut.";
static const char sleepTimerEOP[] PROGMEM = "Sleep-Timer: Nach dem letzten Track der Playlist.";
static const char sleepTimerEOT[] PROGMEM = "Sleep-Timer: Nach dem Ende des laufenden Tracks.";
static const char sleepTimerStop[] PROGMEM = "Sleep-Timer wurde deaktiviert.";
static const char sleepTimerEO5[] PROGMEM = "Sleep Timer: Nach Ende des Titels oder, wenn früher, Ende der Playlist";
static const char sleepTimerAlreadyStopped[] PROGMEM = "Sleep-Timer ist bereits deaktiviert.";
static const char sleepTimerSetTo[] PROGMEM = "Sleep-Timer gesetzt auf";
static const char allowButtons[] PROGMEM = "Alle Tasten werden freigegeben.";
static const char lockButtons[] PROGMEM = "Alle Tasten werden gesperrt.";
static const char noPlaylistNotAllowedMqtt[] PROGMEM = "Playmode kann nicht auf 'Keine Playlist' gesetzt werden via MQTT.";
static const char playmodeChangedMQtt[] PROGMEM = "Playmode per MQTT angepasst.";
static const char noPlaymodeChangeIfIdle[] PROGMEM = "Playmode kann nicht verändert werden, wenn keine Playlist aktiv ist.";
static const char noValidTopic[] PROGMEM = "Kein gültiges Topic";
static const char freePtr[] PROGMEM = "Ptr-Freigabe";
static const char freeMemory[] PROGMEM = "Freier Speicher";
static const char writeEntryToNvs[] PROGMEM = "Schreibe Eintrag in NVS";
static const char freeMemoryAfterFree[] PROGMEM = "Freier Speicher nach Aufräumen";
static const char releaseMemoryOfOldPlaylist[] PROGMEM = "Gebe Speicher der alten Playlist frei.";
static const char dirOrFileDoesNotExist[] PROGMEM = "Datei oder Verzeichnis existiert nicht ";
static const char unableToAllocateMemForPlaylist[] PROGMEM = "Speicher für Playlist konnte nicht allokiert werden!";
static const char unableToAllocateMem[] PROGMEM = "Speicher konnte nicht allokiert werden!";
static const char fileModeDetected[] PROGMEM = "Dateimodus erkannt.";
static const char nameOfFileFound[] PROGMEM = "Gefundenes File";
static const char reallocCalled[] PROGMEM = "Speicher reallokiert.";
static const char unableToAllocateMemForLinearPlaylist[] PROGMEM = "Speicher für lineare Playlist konnte nicht allokiert werden!";
static const char numberOfValidFiles[] PROGMEM = "Anzahl gültiger Files";
static const char newLoudnessReceivedQueue[] PROGMEM = "Neue Lautstärke empfangen via Queue";
static const char newCntrlReceivedQueue[] PROGMEM = "Kontroll-Kommando empfangen via Queue";
static const char newPlaylistReceived[] PROGMEM = "Neue Playlist empfangen";
static const char repeatTrackDueToPlaymode[] PROGMEM = "Wiederhole Titel aufgrund von Playmode.";
static const char repeatPlaylistDueToPlaymode[] PROGMEM = "Wiederhole Playlist aufgrund von Playmode.";
static const char cmndStop[] PROGMEM = "Kommando: Stop";
static const char cmndPause[] PROGMEM = "Kommando: Pause";
static const char cmndNextTrack[] PROGMEM = "Kommando: Nächster Titel";
static const char cmndPrevTrack[] PROGMEM = "Kommando: Vorheriger Titel";
static const char cmndFirstTrack[] PROGMEM = "Kommando: Erster Titel von Playlist";
static const char cmndLastTrack[] PROGMEM = "Kommando: Letzter Titel von Playlist";
static const char cmndDoesNotExist[] PROGMEM = "Dieses Kommando existiert nicht.";
static const char lastTrackAlreadyActive[] PROGMEM = "Es wird bereits der letzte Track gespielt.";
static const char firstTrackAlreadyActive[] PROGMEM = "Es wird bereits der erste Track gespielt.";
static const char trackStartAudiobook[] PROGMEM = "Titel wird im Hörspielmodus von vorne gespielt.";
static const char trackStart[] PROGMEM = "Titel wird von vorne gespielt.";
static const char trackChangeWebstream[] PROGMEM = "Im Webradio-Modus kann nicht an den Anfang gesprungen werden.";
static const char endOfPlaylistReached[] PROGMEM = "Ende der Playlist erreicht.";
static const char trackStartatPos[] PROGMEM = "Titel wird abgespielt ab Position";
static const char rfidScannerReady[] PROGMEM = "RFID-Tags koennen jetzt gescannt werden...";
static const char rfidTagDetected[] PROGMEM = "RFID-Karte erkannt: ";
static const char rfid15693TagDetected[] PROGMEM = "RFID-Karte (ISO-15693) erkannt: ";
static const char rfidTagReceived[] PROGMEM = "RFID-Karte empfangen";
static const char rfidTagUnknownInNvs[] PROGMEM = "RFID-Karte ist im NVS nicht hinterlegt.";
static const char goToSleepDueToIdle[] PROGMEM = "Gehe in Deep Sleep wegen Inaktivität...";
static const char goToSleepDueToTimer[] PROGMEM = "Gehe in Deep Sleep wegen Sleep Timer...";
static const char goToSleepNow[] PROGMEM = "Gehe jetzt in Deep Sleep!";
static const char maxLoudnessReached[] PROGMEM = "Maximale Lautstärke bereits erreicht!";
static const char minLoudnessReached[] PROGMEM = "Minimale Lautstärke bereits erreicht!";
static const char errorOccured[] PROGMEM = "Fehler aufgetreten!";
static const char noMp3FilesInDir[] PROGMEM = "Verzeichnis beinhaltet keine mp3-Files.";
static const char modeSingleTrack[] PROGMEM = "Modus: Einzelner Track";
static const char modeSingleTrackLoop[] PROGMEM = "Modus: Einzelner Track in Endlosschleife";
static const char modeSingleAudiobook[] PROGMEM = "Modus: Hoerspiel";
static const char modeSingleAudiobookLoop[] PROGMEM = "Modus: Hoerspiel in Endlosschleife";
static const char modeAllTrackAlphSorted[] PROGMEM = "Modus: Spiele alle Tracks (alphabetisch sortiert) des Ordners";
static const char modeAllTrackRandom[] PROGMEM = "Modus: Alle Tracks eines Ordners zufällig";
static const char modeAllTrackAlphSortedLoop[] PROGMEM = "Modus: Alle Tracks eines Ordners sortiert (alphabetisch) in Endlosschleife";
static const char modeAllTrackRandomLoop[] PROGMEM = "Modus: Alle Tracks eines Ordners zufällig in Endlosschleife";
static const char modeWebstream[] PROGMEM = "Modus: Webstream";
static const char webstreamNotAvailable[] PROGMEM = "Aktuell kein Webstream möglich, da keine WLAN-Verbindung vorhanden!";
static const char modeDoesNotExist[] PROGMEM = "Abspielmodus existiert nicht!";
static const char modeRepeatNone[] PROGMEM = "Repeatmodus: Kein Repeat";
static const char modeRepeatTrack[] PROGMEM = "Repeatmodus: Aktueller Titel";
static const char modeRepeatPlaylist[] PROGMEM = "Repeatmodus: Gesamte Playlist";
static const char modeRepeatTracknPlaylist[] PROGMEM = "Repeatmodus: Track und Playlist";
static const char modificatorAllButtonsLocked[] PROGMEM = "Modifikator: Alle Tasten werden per RFID gesperrt.";
static const char modificatorAllButtonsUnlocked[] PROGMEM = "Modifikator: Alle Tasten werden per RFID freigegeben.";
static const char modificatorSleepd[] PROGMEM = "Modifikator: Sleep-Timer wieder deaktiviert.";
static const char modificatorSleepTimer15[] PROGMEM = "Modifikator: Sleep-Timer per RFID aktiviert (15 Minuten).";
static const char modificatorSleepTimer30[] PROGMEM = "Modifikator: Sleep-Timer per RFID aktiviert (30 Minuten).";
static const char modificatorSleepTimer60[] PROGMEM = "Modifikator: Sleep-Timer per RFID aktiviert (60 Minuten).";
static const char modificatorSleepTimer120[] PROGMEM = "Modifikator: Sleep-Timer per RFID aktiviert (2 Stunden).";
static const char ledsDimmedToNightmode[] PROGMEM = "LEDs wurden auf Nachtmodus gedimmt.";
static const char modificatorNotallowedWhenIdle[] PROGMEM = "Modifikator kann bei nicht aktivierter Playlist nicht angewendet werden.";
static const char modificatorSleepAtEOT[] PROGMEM = "Modifikator: Sleep-Timer am Ende des Titels aktiviert.";
static const char modificatorSleepAtEOTd[] PROGMEM = "Modifikator: Sleep-Timer am Ende des Titels deaktiviert.";
static const char modificatorSleepAtEOP[] PROGMEM = "Modifikator: Sleep-Timer am Ende der Playlist aktiviert.";
static const char modificatorSleepAtEOPd[] PROGMEM = "Modifikator: Sleep-Timer am Ende der Playlist deaktiviert.";
static const char modificatorAllTrackAlphSortedLoop[] PROGMEM = "Modifikator: Alle Titel (alphabetisch sortiert) in Endlosschleife.";
static const char modificatorAllTrackRandomLoop[] PROGMEM = "Modifikator: Alle Titel (zufällige Reihenfolge) in Endlosschleife.";
static const char modificatorCurTrackLoop[] PROGMEM = "Modifikator: Aktueller Titel in Endlosschleife.";
static const char modificatorCurAudiobookLoop[] PROGMEM = "Modifikator: Aktuelles Hörspiel in Endlosschleife.";
static const char modificatorPlaylistLoopActive[] PROGMEM = "Modifikator: Alle Titel in Endlosschleife aktiviert.";
static const char modificatorPlaylistLoopDeactive[] PROGMEM = "Modifikator: Alle Titel in Endlosschleife deaktiviert.";
static const char modificatorTrackActive[] PROGMEM = "Modifikator: Titel in Endlosschleife aktiviert.";
static const char modificatorTrackDeactive[] PROGMEM = "Modifikator: Titel in Endlosschleife deaktiviert.";
static const char modificatorNotAllowed[] PROGMEM = "Modifikator konnte nicht angewendet werden.";
static const char modificatorLoopRev[] PROGMEM = "Modifikator: Endlosschleife beendet.";
static const char modificatorDoesNotExist[] PROGMEM = "Ein Karten-Modifikator existiert nicht vom Typ";
static const char errorOccuredNvs[] PROGMEM = "Es ist ein Fehler aufgetreten beim Lesen aus dem NVS!";
static const char statementsReceivedByServer[] PROGMEM = "Vom Server wurde Folgendes empfangen";
static const char savedSsidInNvs[] PROGMEM = "Speichere SSID in NVS";
static const char savedWifiPwdInNvs[] PROGMEM = "Speichere WLAN-Password in NVS";
static const char apReady[] PROGMEM = "Access-Point geöffnet";
static const char httpReady[] PROGMEM = "HTTP-Server gestartet.";
static const char unableToMountSd[] PROGMEM = "SD-Karte konnte nicht gemountet werden.";
static const char unableToCreateVolQ[] PROGMEM = "Konnte Volume-Queue nicht anlegen.";
static const char unableToCreateRfidQ[] PROGMEM = "Konnte RFID-Queue nicht anlegen.";
static const char unableToCreateMgmtQ[] PROGMEM = "Konnte Play-Management-Queue nicht anlegen.";
static const char unableToCreatePlayQ[] PROGMEM = "Konnte Track-Queue nicht anlegen..";
static const char initialBrightnessfromNvs[] PROGMEM = "Initiale LED-Helligkeit wurde aus NVS geladen";
static const char wroteInitialBrightnessToNvs[] PROGMEM = "Initiale LED-Helligkeit wurde ins NVS geschrieben.";
static const char restoredInitialBrightnessForNmFromNvs[] PROGMEM = "LED-Helligkeit für Nachtmodus wurde aus NVS geladen";
static const char wroteNmBrightnessToNvs[] PROGMEM = "LED-Helligkeit für Nachtmodus wurde ins NVS geschrieben.";
static const char wroteFtpUserToNvs[] PROGMEM = "FTP-User wurde ins NVS geschrieben.";
static const char restoredFtpUserFromNvs[] PROGMEM = "FTP-User wurde aus NVS geladen";
static const char wroteFtpPwdToNvs[] PROGMEM = "FTP-Passwort wurde ins NVS geschrieben.";
static const char restoredFtpPwdFromNvs[] PROGMEM = "FTP-Passwort wurde aus NVS geladen";
static const char restoredMaxInactivityFromNvs[] PROGMEM = "Maximale Inaktivitätszeit wurde aus NVS geladen";
static const char wroteMaxInactivityToNvs[] PROGMEM = "Maximale Inaktivitätszeit wurde ins NVS geschrieben.";
static const char restoredInitialLoudnessFromNvs[] PROGMEM = "Initiale Lautstärke wurde aus NVS geladen";
static const char wroteInitialLoudnessToNvs[] PROGMEM = "Initiale Lautstärke wurde ins NVS geschrieben.";
static const char restoredMaxLoudnessForSpeakerFromNvs[] PROGMEM = "Maximale Lautstärke für Lautsprecher wurde aus NVS geladen";
static const char restoredMaxLoudnessForHeadphoneFromNvs[] PROGMEM = "Maximale Lautstärke für Kopfhörer wurde aus NVS geladen";
static const char wroteMaxLoudnessForSpeakerToNvs[] PROGMEM = "Maximale Lautstärke für Lautsprecher wurde ins NVS geschrieben.";
static const char wroteMaxLoudnessForHeadphoneToNvs[] PROGMEM = "Maximale Lautstärke für Kopfhörer wurde ins NVS geschrieben.";
static const char maxVolumeSet[] PROGMEM = "Maximale Lautstärke wurde gesetzt auf ";
static const char wroteMqttFlagToNvs[] PROGMEM = "MQTT-Flag wurde ins NVS geschrieben.";
static const char restoredMqttActiveFromNvs[] PROGMEM = "MQTT-Flag (aktiviert) wurde aus NVS geladen";
static const char restoredMqttDeactiveFromNvs[] PROGMEM = "MQTT-Flag (deaktiviert) wurde aus NVS geladen";
static const char wroteMqttServerToNvs[] PROGMEM = "MQTT-Server wurde ins NVS geschrieben.";
static const char restoredMqttServerFromNvs[] PROGMEM = "MQTT-Server wurde aus NVS geladen";
static const char wroteMqttUserToNvs[] PROGMEM = "MQTT-User wurde ins NVS geschrieben.";
static const char restoredMqttUserFromNvs[] PROGMEM = "MQTT-User wurde aus NVS geladen";
static const char wroteMqttPwdToNvs[] PROGMEM = "MQTT-Passwort wurde ins NVS geschrieben.";
static const char restoredMqttPwdFromNvs[] PROGMEM = "MQTT-Passwort wurde aus NVS geladen";
static const char mqttWithPwd[] PROGMEM = "Verbinde zu MQTT-Server mit User und Passwort";
static const char mqttWithoutPwd[] PROGMEM = "Verbinde zu MQTT-Server ohne User und Passwort";
static const char ssidNotFoundInNvs[] PROGMEM = "SSID wurde im NVS nicht gefunden.";
static const char wifiPwdNotFoundInNvs[] PROGMEM = "WLAN-Passwort wurde im NVS nicht gefunden.";
static const char wifiStaticIpConfigNotFoundInNvs[] PROGMEM = "Statische WLAN-IP-Konfiguration wurde im NVS nicht gefunden.";
static const char wifiHostnameNotSet[] PROGMEM = "Keine Hostname-Konfiguration im NVS gefunden.";
static const char mqttConnFailed[] PROGMEM = "Verbindung fehlgeschlagen, versuche in Kürze erneut";
static const char restoredHostnameFromNvs[] PROGMEM = "Hostname aus NVS geladen";
static const char currentVoltageMsg[] PROGMEM = "Aktuelle Batteriespannung";
static const char voltageTooLow[] PROGMEM = "Batteriespannung niedrig";
static const char sdBootFailedDeepsleep[] PROGMEM = "Bootgang wegen SD fehlgeschlagen. Gehe in Deepsleep...";
static const char wifiEnabledAfterRestart[] PROGMEM = "WLAN wird aktiviert.";
static const char wifiDisabledAfterRestart[] PROGMEM = "WLAN wird deaktiviert.";
static const char voltageIndicatorLowFromNVS[] PROGMEM = "Unterer Spannungslevel (Batterie) fuer Neopixel-Anzeige aus NVS geladen";
static const char voltageIndicatorHighFromNVS[] PROGMEM = "Oberer Spannungslevel (Batterie) fuer Neopixel-Anzeige aus NVS geladen";
static const char voltageCheckIntervalFromNVS[] PROGMEM = "Zyklus für Spannungsmessung (Batterie) fuer Neopixel-Anzeige aus NVS geladen";
static const char warningLowVoltageFromNVS[] PROGMEM = "Spannungslevel (Batterie) fuer Warnung via Neopixel aus NVS geladen";
static const char unableToRestoreLastRfidFromNVS[] PROGMEM = "Letzte RFID konnte nicht aus NVS geladen werden";
static const char restoredLastRfidFromNVS[] PROGMEM = "Letzte RFID wurde aus NVS geladen";
static const char failedOpenFileForWrite[] PROGMEM = "Öffnen der Datei für den Schreibvorgang fehlgeschlagen";
static const char fileWritten[] PROGMEM = "Datei geschrieben";
static const char writeFailed[] PROGMEM = "Schreibvorgang fehlgeschlagen";
static const char writingFile[] PROGMEM = "Schreibe Datei";
static const char failedToOpenFileForAppending[] PROGMEM = "Öffnen der Datei zum Schreiben der JSON-Datei fehlgeschlagen";
static const char listingDirectory[] PROGMEM = "Verzeichnisinhalt anzeigen";
static const char failedToOpenDirectory[] PROGMEM = "Öffnen des Verzeichnisses fehlgeschlagen";
static const char notADirectory[] PROGMEM = "Kein Verzeichnis";
static const char sdMountedMmc1BitMode[] PROGMEM = "Versuche SD-Karte wird im SD_MMC-Modus (1 Bit) zu mounten...";
static const char sdMountedSpiMode[] PROGMEM = "Versuche SD-Karte wird im SPI-Modus zu mounten...";
static const char backupRecoveryWebsite[] PROGMEM = "<p>Das Backup-File wird eingespielt...<br />Zur letzten Seite <a href=\"javascript:history.back()\">zur&uuml;ckkehren</a>.</p>";
static const char restartWebsite[] PROGMEM = "<p>Der ESPuino wird neu gestartet...<br />Zur letzten Seite <a href=\"javascript:history.back()\">zur&uuml;ckkehren</a>.</p>";
static const char shutdownWebsite[] PROGMEM = "<p>Der ESPuino wird ausgeschaltet...</p>";
static const char mqttMsgReceived[] PROGMEM = "MQTT-Nachricht empfangen";
static const char trackPausedAtPos[] PROGMEM = "Titel pausiert bei Position";
static const char freeHeapWithoutFtp[] PROGMEM = "Freier Heap-Speicher vor FTP-Instanzierung";
static const char freeHeapWithFtp[] PROGMEM = "Freier Heap-Speicher nach FTP-Instanzierung";
static const char freeHeapAfterSetup[] PROGMEM = "Freier Heap-Speicher nach Setup-Routine";
static const char tryStaticIpConfig[] PROGMEM = "Statische IP-Konfiguration wird durchgeführt...";
static const char staticIPConfigFailed[] PROGMEM = "Statische IP-Konfiguration fehlgeschlagen";
static const char wakeUpRfidNoIso14443[] PROGMEM = "ESP32 wurde vom Kartenleser aus dem Deepsleep aufgeweckt. Allerdings wurde keine ISO-14443-Karte gefunden. Gehe zurück in den Deepsleep...";
static const char lowPowerCardSuccess[] PROGMEM = "Kartenerkennung via 'low power' erfolgreich durchgeführt";
static const char rememberLastVolume[] PROGMEM = "Lautstärke vor dem letzten Shutdown wird wiederhergestellt. Dies überschreibt die Einstellung der initialen Lautstärke aus der GUI.";
static const char unableToStartFtpServer[] PROGMEM = "Der FTP-Server konnte nicht gestartet werden. Entweder weil er ist bereits gestartet oder kein WLAN verfügbar ist.";