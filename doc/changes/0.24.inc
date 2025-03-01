.. NOTE: we are now using links to highlight new functions and classes.
   Please follow the examples below like :func:`mne.stats.f_mway_rm`, so the
   whats_new page will have a link to the function/class documentation.

.. NOTE: there are 3 separate sections for changes, based on type:
   - "Enhancements" for new features
   - "Bugs" for bug fixes
   - "API changes" for backward-incompatible changes

.. NOTE: changes from first-time contributors should be added to the TOP of
   the relevant section (Enhancements / Bugs / API changes), and should look
   like this (where xxxx is the pull request number):
   - description of enhancement/bugfix/API change (:gh:`xxxx` **by new contributor** |Firstname Lastname|_)

.. _changes_0_24_0:

Version 0.24.0 (2021-11-03)
---------------------------

.. |David Julien| replace:: **David Julien**

.. |Dominique Makowski| replace:: **Dominique Makowski**

.. |Romain Derollepot| replace:: **Romain Derollepot**

.. |Jan Sosulski| replace:: **Jan Sosulski**

.. |Xiaokai Xia| replace:: **Xiaokai Xia**

.. |Marian Dovgialo| replace:: **Marian Dovgialo**

.. |Pierre-Antoine Bannier| replace:: **Pierre-Antoine Bannier**

.. |Darin Erat Sleiter| replace:: **Darin Erat Sleiter**

.. |Mathieu Scheltienne| replace:: **Mathieu Scheltienne**

.. |Timothy Gates| replace:: **Timothy Gates**

.. |Reza Shoorangiz| replace:: **Reza Shoorangiz**

.. |Evgeny Goldstein| replace:: **Evgeny Goldstein**

.. |Joshua Teves| replace:: **Joshua Teves**

.. |Riessarius Stargardsky| replace:: **Riessarius Stargardsky**

.. |John Samuelsson| replace:: **John Samuelsson**

Enhancements
~~~~~~~~~~~~
.. - Add something cool (:gh:`9192` **by new contributor** |New Contributor|_)

- Add `pooch` to system information reports (:gh:`9801` **by new contributor** |Joshua Teves|_)

- Get annotation descriptions from the name field of SNIRF stimulus groups when reading SNIRF files via `mne.io.read_raw_snirf` (:gh:`9575` **by new contributor** |Darin Erat Sleiter|_)

- Add support for NIRSport and NIRSport2 devices to `mne.io.read_raw_nirx` (:gh:`9348` and :gh:`9401` **by new contributor** |David Julien|_, **new contributor** |Romain Derollepot|_, `Robert Luke`_, and `Eric Larson`_)

- New function :func:`mne.Dipole.to_volume_labels` to get atlas label for MRI coordinates.  (:gh:`9376` by **new contributor** |Marian Dovgialo|_)

- Add support for SURE parameter selection in :func:`mne.inverse_sparse.mixed_norm` and make ``alpha`` parameter now default to ``'sure'`` (:gh:`9430` by **new contributor** |Pierre-Antoine Bannier|_ and `Alex Gramfort`_)

- Speed up BCD solver in :func:`mne.inverse_sparse.mixed_norm` by adding Anderson acceleration (:gh:`9481` by **new contributor** |Pierre-Antoine Bannier|_ and `Alex Gramfort`_)

- Add support for list of channel types for EEG/sEEG/ECoG/DBS referencing (:gh:`9637` **by new contributor** |Mathieu Scheltienne|_)

- Add the ability to set point size and line width in :func:`mne.viz.plot_sensors` and related functions (:gH:`9872` **by new contributor** |Dominique Makowski|_)

- Add support for changing the default event id used by :func:`mne.make_fixed_length_epochs` (:gh:`9782` **by new contributor** |Mathieu Scheltienne|_)

- Improve documentation for arguments ``threshold``, ``method`` and ``measure`` of ICA methods `~mne.preprocessing.ICA.find_bads_ecg`, `~mne.preprocessing.ICA.find_bads_ref` and `~mne.preprocessing.ICA.find_bads_eog` (:gh:`9858` **by new contributor** |Mathieu Scheltienne|_)

- Add support for more than 3 source estimates in :func:`mne.viz.plot_sparse_source_estimates` (:gh:`9640` **by new contributor** |Pierre-Antoine Bannier|_ and `Alex Gramfort`_)

- Add cortical signal suppression (CSS) :func:`mne.preprocessing.cortical_signal_suppression` (:gh:`6888`, :gh:`9892` **by new contributor** |John Samuelsson|_ and `Eric Larson`_)

- Show all good channel types and counts when printing a :class:`mne.Info` in the notebook (:gh:`9725` by `Valerii Chirkov`_ and `Eric Larson`_)

- Speed up point decimation in :func:`mne.io.read_raw_kit` by vectorization and use of :class:`scipy.spatial.cKDTree` (:gh:`9568` by `Jean-Remi King`_ and `Eric Larson`_)

- Add ability to export EDF+ files using :func:`mne.export.export_raw` (:gh:`9643` by `Adam Li`_)

- New function :func:`mne.chpi.get_chpi_info` to retrieve basic information about the cHPI system used when recording MEG data (:gh:`9369` by `Richard Höchenberger`_)

- New namespace `mne.export` created to contain functions (such as `mne.export.export_raw` and `mne.export.export_epochs`) for exporting data to non-FIF formats (:gh:`9427` by `Eric Larson`_)

- Add support for Hitachi fNIRS devices in `mne.io.read_raw_hitachi` (:gh:`9391` by `Eric Larson`_)

- Add support for ``picks`` in :func:`mne.stc_near_sensors` (:gh:`9396` by `Eric Larson`_)

- Add label methods `mne.Label.compute_area` and `mne.Label.distances_to_outside` (:gh:`9424` by `Eric Larson`_)

- Add projections when printing a :class:`mne.Info` in the notebook (:gh:`9403` by `Alex Gramfort`_)

- Add new function :func:`mne.bem.make_scalp_surfaces` to compute scalp surfaces for coregistration (:gh:`9463` by `Alex Gramfort`_)

- Add support for interpolating oxy and deoxyhaemoglobin data types (:gh:`9431` by `Robert Luke`_)

- Add support for SNIRF files in :class:`mne.Report` (:gh:`9443` by `Robert Luke`_)

- Add support for exporting MFF evoked files using `mne.export.export_evokeds` and `mne.export.export_evokeds_mff` (:gh:`9406` by `Evan Hathaway`_)

- :func:`mne.concatenate_raws`, :func:`mne.concatenate_epochs`, and :func:`mne.write_evokeds` gained a new parameter ``on_mismatch``, which controls behavior in case not all of the supplied instances share the same device-to-head transformation (:gh:`9438` by `Richard Höchenberger`_)

- Add support for multiple datablocks (acquistions with pauses) in :func:`mne.io.read_raw_nihon` (:gh:`9437` by `Federico Raimondo`_)

- Add new function :func:`mne.preprocessing.annotate_break` to automatically detect and mark "break" periods without any marked experimental events in the continuous data (:gh:`9445` by `Richard Höchenberger`_)

- Add "time_format" to :meth:`mne.io.Raw.plot` and :meth:`mne.preprocessing.ICA.plot_sources` to display acquisition time on x-axis (:gh:`9419` by `Martin Schulz`_)

- Speed up :meth:`mne.decoding.TimeDelayingRidge.predict` by switching to FFT-based convolution (:gh:`9458` by `Ross Maddox`_)

- Show multiple colors and linestyles for excluded components with :class:`mne.Evoked` in :meth:`mne.preprocessing.ICA.plot_sources` (:gh:`9444` by `Martin Schulz`_)

- Add functions for aligning MRI and CT data `mne.transforms.compute_volume_registration` and `mne.transforms.apply_volume_registration` (:gh:`9503` by `Alex Rockhill`_ and `Eric Larson`_)

- Add tutorial for how to processes image (CT and MR) files in order to localize electrode contacts for intracranial recordings :ref:`tut-ieeg-localize` (:gh:`9484` by `Alex Rockhill`_)

- Add vertex number in source space for :meth:`mne.VolSourceEstimate.plot` and :func:`mne.viz.plot_volume_source_estimates` (:gh:`9697` by `Eric Larson`_)

- Add support for colormap normalization in :func:`mne.viz.plot_topomap` (:gh:`9468` by `Clemens Brunner`_)

- Update :func:`mne.preprocessing.realign_raw` with Numpy-recommended polynomial fitting method (:gh:`9514` by `Erica Peterson`_)

- Add a warning to `mne.preprocessing.nirs.beer_lambert_law` when source-detector distances are zero (:gh:`9541` by `Eric Larson`_)

- Add ``exclude`` parameter to :meth:`mne.io.Raw.plot_psd` and :meth:`mne.Epochs.plot_psd` (:gh:`9519` by `Clemens Brunner`_)

- Add `mne.Annotations.rename` to rename annotation descriptions (:gh:`9525` by `Robert Luke`_)

- Add `mne.Annotations.set_durations` to set annotation durations (:gh:`9529` by `Robert Luke`_)

- The ``exclude`` parameter in `mne.io.read_raw_edf`, `mne.io.read_raw_bdf`, and `mne.io.read_raw_gdf` now also accepts a regular expression (:gh:`9558` by `Clemens Brunner`_)

- Add :meth:`mne.Evoked.get_data` method to :class:`mne.Evoked` (:gh:`9555` by `Stefan Appelhoff`_)

- The :meth:`mne.Epochs.get_data` method now has a ``units`` parameter (:gh:`9553` by `Stefan Appelhoff`_)

- Add :func:`mne.warp_montage_volume` to use an anatomical volume with channel locations at high or low insensities to apply a symmetric diffeomorphic registration to a template (e.g. fsaverage) space (:gh:`9544` by `Alex Rockhill`_)

- :meth:`mne.io.Raw.get_data`, :meth:`mne.Epochs.get_data`, and :meth:`mne.Evoked.get_data` methods now have ``tmin`` and ``tmax`` parameters to specify data window in seconds to get (:gh:`9556` by `Stefan Appelhoff`_)

- The :meth:`mne.Evoked.get_data` method now has a ``units`` parameter (:gh:`9578` by `Stefan Appelhoff`_)

- Add `mne.chpi.compute_chpi_snr` and `mne.viz.plot_chpi_snr` for computing and plotting the time-varying SNR of continuously-active HPI coils (:gh:`9570` by `Daniel McCloy`_ and `Jussi Nurminen`_)

- Add :func:`mne.get_montage_volume_labels` to find the regions of interest in a Freesurfer atlas anatomical segmentation for an intracranial electrode montage and :func:`mne.viz.plot_channel_labels_circle` to plot them (:gh:`9545` by `Alex Rockhill`_)

- Add :func:`mne.viz.Brain.add_volume_labels` to plot subcortical surfaces and other regions of interest (:gh:`9540` by `Alex Rockhill`_ and `Eric Larson`_)

- Add custom cortex curvature colors in :class:`mne.viz.Brain` via the ``cortex`` argument (:gh:`9750` by `Eric Larson`_)

- Add :meth:`mne.channels.DigMontage.apply_trans` to apply a transform directly to a montage (:gh:`9601` by `Alex Rockhill`_)

- :meth:`mne.preprocessing.ICA.fit` now emits a warning if any of the ``start``, ``stop``, ``reject``, and ``flat`` parameters are passed when performing ICA on `~mne.Epochs`. These parameters only have an effect on `~mne.io.Raw` data and were previously silently ignored in the case of `~mne.Epochs` (:gh:`9605` by `Richard Höchenberger`_)

- :func:`mne.viz.plot_alignment` now emits a warning (instead of aborting with an exception) if the surfaces contain topological defects (:gh:`9614` by `Richard Höchenberger`_)

- The coregistration GUI can now display the head surface even if there are topological defects. Previously, a low-resolution standard head unsuitable for individualized coregistration was displayed (:gh:`9614` by `Richard Höchenberger`_)

- New :class:`mne.coreg.Coregistration` object to allow coregistration scripting without a dependency on mayavi (:gh:`9516` by `Guillaume Favelier`_).

- Add :meth:`mne.viz.Brain.add_head` to plot the head surface (:gh:`9618` by `Alex Rockhill`_)

- Add :func:`mne.channels.read_dig_localite` to read Localite electrode location files (:gh:`9658` by `Clemens Brunner`_)

- Add :meth:`mne.viz.Brain.add_sensors` to plot sensor locations (:gh:`9585` by `Alex Rockhill`_)

- Add :func:`mne.coreg.estimate_head_mri_t` to estimate the head->mri transform from fsaverage fiducials (:gh:`9585` by `Alex Rockhill`_)

- Add :meth:`mne.channels.DigMontage.add_mni_fiducials` to add fiducials to a montage in MNI coordinates (:gh:`9682` by `Alex Rockhill`_)

- Add :meth:`mne.channels.DigMontage.remove_fiducials` to remove fiducials under rare circumstances when the coordinate frame should not be set to "head" (:gh:`9684` by `Alex Rockhill`_)

- Add remove methods for mesh objects in :class:`mne.viz.Brain` (:gh:`9688` by `Alex Rockhill`_)

- Add ``--show-paths`` and ``--developer`` options to :ref:`mne sys_info` (:gh:`9789` by `Eric Larson`_)

- Add ability to export EDF+ files using :func:`mne.export.export_raw` (:gh:`9643` by `Adam Li`_)

- Reading EDF files via :func:`mne.io.read_raw_edf` now can infer channel type from the signal label in the EDF header (:gh:`9694` by `Adam Li`_)

- Add :func:`mne.gui.locate_ieeg` to locate intracranial electrode contacts from a CT, an MRI (with Freesurfer ``recon-all``) and the channel names from an :class:`mne.Info` object (:gh:`9586` by `Alex Rockhill`_)

- All data fetching code now relies on ``pooch``, which is an added optional requirement for dataset fetchers (:gh:`9742` by `Adam Li`_ and `Daniel McCloy`_)

- Add phantom FreeSurfer subject fetcher :func:`mne.datasets.fetch_phantom` to allow fetching the Otaniemi phantom (:gh:`9796` by `Eric Larson`_)

- Add :func:`mne.datasets.fetch_dataset` to allow packages to fetch datasets in a similar fashion to MNE (:gh:`9763` by `Adam Li`_)

- Add full ECoG dataset to MNE-misc-data and demonstrate its use in :ref:`ex-electrode-pos-2d` and :ref:`tut-ieeg-localize` (:gh:`9784` by `Alex Rockhill`_)

- Add options ``tol`` and ``accuracy`` to :func:`mne.fit_dipole` to control optimization (:gh:`9810` by `Eric Larson`_)

- Completely revamp the `~mne.Report` experience: new HTML layout, many new methods, more flexibility; the functionality is demonstrated in :ref:`tut-report` (:gh:`9754`, :gh:`9828`, :gh:`9847`, :gh:`9860`, :gh:`9861`, :gh:`9862`, :gh:`9863`, :gh:`9871`, :gh:`9881`, :gh:`9891`, :gh:`9901` by `Richard Höchenberger`_, `Eric Larson`_, and `Alex Gramfort`_)

- Add basic HTML representations of `~mne.Forward` and `~mne.minimum_norm.InverseOperator` instances for a nicer Jupyter experience (:gh:`9754` by `Richard Höchenberger`_)

- `mne.io.read_raw_brainvision` now handles ASCII data with comma-separated values, as may be exported from BrainVision Analyzer (:gh:`9795` by `Richard Höchenberger`_)

- Add :func:`mne.preprocessing.ieeg.project_sensors_onto_brain` to project ECoG sensors onto the pial surface to compensate for brain shift (:gh:`9800` by `Alex Rockhill`_)

- Add support for data acquired with NIRx devices using Aurora software version 2021.9 (:gh:`9800` by `Robert Luke`_, and `Eric Larson`_)

- All functions for reading and writing files should now automatically handle ``~`` (the tilde character) and expand it to the user's home directory. Should you come across any function that doesn't do it, please do let us know! (:gh:`9613`, :gh:`9845` by `Richard Höchenberger`_)

- All functions accepting a FreeSurfer subjects directory via a ``subjects_dir`` parameter can now consume :py:class:`pathlib.Path` objects too (used to be only strings) (:gh:`9613` by `Richard Höchenberger`_)

- Add support for colormap normalization in :meth:`mne.time_frequency.AverageTFR.plot` (:gh:`9851` by `Clemens Brunner`_)

- Add support for BIDS-compatible filenames when splitting big epochs files via the new ``split_naming`` parameter in :meth:`mne.Epochs.save` (:gh:`9869` by `Denis Engemann`_)

- Add ``by_event_type`` parameter to :meth:`mne.Epochs.average` to create a list containing an :class:`mne.Evoked` object for each event type (:gh:`9859` by `Marijn van Vliet`_)

- Add pyqtgraph as a new backend for :meth:`mne.io.Raw.plot` (:gh:`9687` by `Martin Schulz`_)

- Add :func:`mne.viz.set_browser_backend`, :func:`mne.viz.use_browser_backend` and :func:`mne.viz.get_browser_backend` to set matplotlib or pyqtgraph as backend for :meth:`mne.io.Raw.plot` (:gh:`9687` by `Martin Schulz`_)

Bugs
~~~~
- Fix bug in :meth:`mne.io.Raw.pick` and related functions when parameter list contains channels which are not in info instance (:gh:`9708` **by new contributor** |Evgeny Goldstein|_)

- Fix a few typos (:gh:`9706` **by new contributor** |Timothy Gates|_)

- Fix bug with :meth:`mne.Epochs.crop` and :meth:`mne.Evoked.crop` when ``include_tmax=False``, where the last sample was always cut off, even when ``tmax > epo.times[-1]`` (:gh:`9378` **by new contributor** |Jan Sosulski|_)

- Fix bug with `mne.io.read_raw_curry` to allow reading Curry 7 and 8 event files with '.ceo' and '.cdt.ceo' extensions (:gh:`9381`, :gh:`9712` by **new contributor** |Xiaokai Xia|_, `Daniel McCloy`_, and **by new contributor** |Reza Shoorangiz|_)

- Fix bug with `mne.compute_rank`, `mne.cov.compute_whitener` and `mne.preprocessing.ICA.fit` when explicit picks including bad channels are provided (:gh:`9719` **by new contributor** |Mathieu Scheltienne|_)

- Fix bug with :func:`mne.concatenate_epochs` where the concatenated events could end up in non-chronological order. (:gh:`9765` **by new contributor** |Jan Sosulski|_)

- Fix bug where :func:`mne.time_frequency.psd_array_welch` and :func:`mne.time_frequency.psd_array_multitaper` failed to handle negative integer for ``n_jobs`` argument (:gh:`9849` **by new contributor** |Riessarius Stargardsky|_)

- Fix bug where resampling returns empty instances (:gh:`9897` **by new contributor** |Mathieu Scheltienne|_ and `Eric Larson`_)

- Fix bug with `mne.io.Raw.get_montage` now returning both good and bad channels in the montage. (:gh:`9920` **by new contributor** |Mathieu Scheltienne|_)

- Fix bug with :func:`mne.io.read_raw_nihon` where latin-1 annotations could not be read (:gh:`9384` by `Alex Gramfort`_)

- Fix bug when printing a :class:`mne.io.RawArray` in the notebook (:gh:`9404` by `Alex Gramfort`_)

- Fix bug when computing rank from info for SSS data with only gradiometers or magnetometers (:gh:`9435` by `Alex Gramfort`_)

- Fix bug with `mne.preprocessing.find_bad_channels_maxwell` where all-flat segments could lead to an error (:gh:`9531` by `Eric Larson`_)

- Fix bug with `mne.io.Raw.set_montage` and related functions where the channel coordinate frame was not properly set to head (:gh:`9447` by `Eric Larson`_)

- Fix bug with `mne.io.read_raw_fieldtrip` and `mne.read_epochs_fieldtrip` where channel positions were not set properly (:gh:`9447` by `Eric Larson`_)

- Fix bug with :func:`mne.io.read_raw_kit` where omitting HPI coils could lead to an :exc:`python:AssertionError` on reading (:gh:`9612` by `Eric Larson`_)

- Fix bug with :func:`mne.io.read_raw_edf` where reading only stimulus channels would lead to an error (:gh:`9831` by `Eric Larson`_)

- Fix bug with `mne.preprocessing.nirs.optical_density` where protection against zero values was not guaranteed (:gh:`9522` by `Eric Larson`_)

- :func:`mne.concatenate_raws` now raises an exception if ``raw.info['dev_head_t']`` differs between files. This behavior can be controlled using the new ``on_mismatch`` parameter (:gh:`9438` by `Richard Höchenberger`_)

- Fixed bug in :meth:`mne.Epochs.drop_bad` where subsequent rejections failed if they only specified thresholds for a subset of the channel types used in a previous rejection (:gh:`9485` by `Richard Höchenberger`_).

- Fix bug with `mne.simulation.simulate_evoked`, `mne.apply_forward`, and `mne.apply_forward_raw` where systems with EEG channels that come before MEG channels would have them mixed up in the output evoked or raw object (:gh:`#9513` by `Eric Larson`_)

- In :func:`mne.viz.plot_ica_scores` and :meth:`mne.preprocessing.ICA.plot_scores`, the figure and axis titles no longer overlap when plotting only a single EOG or ECG channel (:gh:`9489` by `Richard Höchenberger`_).

- Ensure `mne.io.Raw.get_montage` works with SNIRF data (:gh:`9524` by `Robert Luke`_)

- Fix bug in :func:`mne.setup_volume_source_space` where non-finite positions could be used in a discrete source space (:gh:`9603` by `Eric Larson`_)

- Fix bug in :func:`mne.viz.plot_topomap` (and related methods like :meth:`mne.Evoked.plot_topomap`) where large distances between electrodes (higher than head radius) would lead to an error (:gh:`9528` by `Mikołaj Magnuski`_).

- Fix bug in `mne.viz.plot_topomap` (and related methods) where passing ``axes`` that are part of a matplotlib figure that uses a constrained layout would emit warnings (:gh:`9558` by `Eric Larson`_)

- Fix bug in :func:`mne.make_forward_solution` where impossible sensor-BEM geometries were not checked (:gh:`9893` by `Eric Larson`_)

- Fix bug in :func:`mne.concatenate_epochs` when concatenating :class:`mne.Epochs` objects with 0 events (:gh:`9535` by `Marijn van Vliet`_)

- Fix bug in :func:`mne.viz.Brain.screenshot` where the RGBA mode was not supported (:gh:`9564` by `Guillaume Favelier`_).

- Fix bug in :func:`mne.io.read_raw_egi` where reading data from a data segment that is part of an acquisition skip would lead to an error (:gh:`9565` by `Eric Larson`_)

- Prevent :meth:`mne.io.Raw.plot` windows from spawning at sizes too small to properly render (:gh:`9629` by `Daniel McCloy`_)

- Fix bug where :meth:`mne.io.Raw.plot` raised an error when plotting raw dipole data (:gh:`9771` by `Eric Larson`_)

- Fix bug in ::meth:`mne.preprocessing.ICA.find_bads_ecg` where passing ``start`` and ``stop`` lead to erroneous data windows depending on the combination of Raw, Epochs, Evoked, and the type (int, float, None) of ``start`` and ``stop`` (:gh:`9556` by `Stefan Appelhoff`_)

- Fix bug in :func:`mne.viz.set_3d_backend` and :func:`mne.viz.get_3d_backend` where the PyVistaQt-based backend was ambiguously named ``'pyvista'`` instead of ``'pyvistaqt'``; use ``set_3d_backend('pyvistaqt')`` and expect ``'pyvistaqt'`` as the output of :func:`mne.viz.get_3d_backend` instead of ``'pyvista'``, and consider using ``get_3d_backend().startswith('pyvista')`` for example for backward-compatible conditionals (:gh:`9607` by `Guillaume Favelier`_)

- Fix bug in :func:`mne.viz.plot_compare_evokeds` where confidence bands were not drawn if only one condition was plotted (:gh:`9663` by `Daniel McCloy`_)

- Fix bug where setting of a montage with fNIRS data got set to "unknown" coordinate frame when it should have been in "head" (:gh:`9630` by `Alex Rockhill`_)

- Fix bug where "seeg", "ecog", "dbs" and "fnirs" data had coordinate frame unknown upon loading from a file when it should have been in "head" (:gh:`9580` by `Alex Rockhill`_)

- Raise error when no ``trans`` is provided to :func:`mne.viz.plot_alignment` when required instead of assuming identitiy head->mri transform (:gh:`9585` by `Alex Rockhill`_)

- Fix bug where :meth:`mne.Epochs.equalize_event_counts` failed when only one good epoch existed for one of the event types (:gh:`9758` by `Daniel McCloy`_)

- Fix bug where channels with a dollar sign ($) were not being labeled "misc" in :func:`mne.io.read_raw_nihon` (:gh:`9695` by `Adam Li`_)

- Fix bug where :func:`mne.io.read_raw_persyst` was lower-casing events it found in the ``.lay`` file (:gh:`9746` by `Adam Li`_)

- Fix bug with Qhull when plotting OPM sensors in :func:`mne.viz.plot_alignment` (:gh:`9799` and :gh:`9804` by `Eric Larson`_)

- Fix bug where :func:`mne.io.read_raw_snirf` was including the landmark index as a spatial coordinate (:gh:`9777` by `Robert luke`_)

- Fix bug where `mne.Annotations` were not appending channel names when being added together (:gh:`9780` by `Adam Li`_)

- `mne.viz.plot_evoked_joint` now correctly handles a ``times='peaks'`` parameter value (:gh:`9754` by `Richard Höchenberger`_)

- In `mne.viz.plot_compare_evokeds`, slightly adjust the x-axis limit calculation to avoid drawing an axis that is too short (:gh:`9754` by `Richard Höchenberger`_)

- Fix a bug with :func:`mne.viz.snapshot_brain_montage` with the Mayavi backend where electrodes were shown in the wrong positions, and with the PyVista backend where the snapshot always contained the electrodes but could be missing a hemisphere (:gh:`9933` by `Eric Larson`_)

- In :meth:`mne.io.Raw.plot_psd` and :meth:`mne.Epochs.plot_psd`, avoid overlap between subplot titles and x-axis tick labels (:gh:`9864` by `Richard Höchenberger`_)

- In :meth:`mne.Epochs.plot_psd_topomap`, the data is now scaled to match the output of :meth:`mne.Epochs.plot_psd` (:gh:`9873` by `Richard Höchenberger`_)

- Fix channel locations with ``NaN`` values causing all channel locations not to be plotted in :func:`mne.viz.Brain.add_sensors` (:gh:`9911` by `Alex Rockhill`_)

- Fix infinite loop bug in :func:`mne.get_montage_volume_labels` (:gh:`9940` by `Alex Rockhill`_)

API changes
~~~~~~~~~~~
- The :class:`mne.Info` class is now more strictly checked when attributes are set. Setting most attributes directly will lead to an error in the next release. See the docstring of :class:`mne.Info` for more information (:gh:`9867` **by new contributor** |Mathieu Scheltienne|_)

- The Mayavi 3D backend has been deprecated (:gh:`9904` by `Eric Larson`_):

  - In 3D plotting functions, use PyVista-based backends (``'pyvistaqt'`` and ``'notebook'``) as PySurfer/Mayavi will be removed in the next version

  - To use the :ref:`mne kit2fiff` command-line GUI for fiducial markers, install the separate ``mne-kit-gui`` module, which can still be launched via ``$ mne kit2fiff``

  - The ``mne.gui.fiducials`` GUI has been deprecated, use :ref:`mne coreg` or ``mne_kit_gui.fiducials()`` to set MRI fiducials instead

- In `mne.compute_source_morph`, the ``niter_affine`` and ``niter_sdr`` parameters have been replaced by ``niter`` and ``pipeline`` parameters for more consistent and finer-grained control of registration/warping steps and iteration (:gh:`9505` by `Alex Rockhill`_ and `Eric Larson`_)

- Split :func:`mne.viz.Brain.show_view` argument ``view`` into ``azimuth``, ``elevation`` and ``focalpoint`` for clearer view setting and make the default for ``row`` and ``col`` apply to all rows and columns (:gh:`9596` by `Alex Rockhill`_)

- Deprecate ``solver='prox'`` in :func:`mne.inverse_sparse.mixed_norm` in favor of ``solver='cd'`` and ``solver='bcd'`` as coordinate descent solvers consistently outperform proximal gradient descent (:gh:`9608` by `Pierre-Antoine Bannier`_)

- All ``mne.connectivity`` functions have moved to the ``mne-connectivity`` package; they are deprecated in MNE-Python and will be removed in version 0.25 (:gh:`9493` by `Adam Li`_).

- :func:`mne.inverse_sparse.mixed_norm` now simply warns when source estimates contain no dipole, e.g. if data are too noisy and alpha is based on SURE (:gh:`9685` by `Alex Gramfort`_)

- Deprecate functions :samp:`mne.datasets.{DATASET_NAME}.has_{DATASET_NAME}_data()` for these datasets: ``epilepsy_ecog``, ``fnirs_motor``, ``multimodal``, ``opm``, ``phantom_4dbti``, ``refmeg_noise``, ``sample``, ``somato``, and ``ssvep``. Use the generic :func:`mne.datasets.has_dataset` instead (:gh:`9781` by `Daniel McCloy`_ and `Adam Li`_)

- :class:`mne.Report` modernization has led to multiple deprecations (:gh:`9754` by `Richard Höchenberger`_):

  - ``mne.Report.add_figs_to_section`` and ``mne.Report.add_slider_to_section`` have been deprecated in favor of :meth:`mne.Report.add_figure`

  - ``mne.Report.add_images_to_section`` has been deprecated in favor of :meth:`mne.Report.add_image`

  - ``mne.Report.add_bem_to_section`` has been deprecated in favor of :meth:`mne.Report.add_bem`

  - ``mne.Report.add_htmls_to_section`` has been deprecated in favor of :meth:`mne.Report.add_html`

  - In :meth:`mne.Report.parse_folder`, the ``sort_sections`` parameter has been deprecated in favor of ``sort_content``

  - In :meth:`mne.Report.remove`, the ``caption`` and ``section`` parameters have been deprecated in favor of ``title`` and ``tags``, respectively

  - The ``mne.Report.sections`` attribute has been deprecated in favor of ``mne.Report.tags``

  - The ``mne.Report.fnames`` attribute has been deprecated without replacement

- :meth:`mne.Epochs.plot` and :func:`mne.viz.plot_epochs` gained parameter ``show_scalebars`` analogous to :meth:`mne.viz.plot_raw` (:gh:`9815` by `Daniel McCloy`_)

- The output folder name for HF_SEF datasets is now ``hf_sef`` instead of ``HF_SEF`` (:gh:`9763` by `Adam Li`_)

- Deprecate ``mne.viz.utils.center_cmap`` (:gh:`9851` by `Clemens Brunner`_)

- The default partial pathlength factor of :func:`mne.preprocessing.nirs.beer_lambert_law` will change from 0.1 in 0.24 to 6.0 in the next release (:gh:`9843` by `Robert Luke`_)

- ``mne.preprocessing.ICA.detect_artifacts`` has been deprecated. Please use `~mne.preprocessing.ICA.find_bads_eog` and `~mne.preprocessing.ICA.find_bads_ecg` instead (:gh:`9909` by `Richard Höchenberger`_)

Authors
~~~~~~~
People who contributed to this release in alphabetical order
(people with a + are first time contributors):

* Adam Li
* Alex Rockhill
* Alexandre Gramfort
* Britta Westner
* Clemens Brunner
* Daniel McCloy
* Darin Erat Sleiter+
* David Julien+
* Denis A. Engemann
* Dominique Makowski+
* Eric Larson
* Erica Peterson
* Evan Hathaway
* Evgeny Goldstein+
* Fede Raimondo
* Gansheng Tan+
* Guillaume Favelier
* Hubert Banville
* Jan Sosulski+
* Jean-Remi King
* Jeff Stout
* Johann Benerradi
* John Samuelsson+
* Josh Koen+
* Joshua Teves+
* Lukas Hecker+
* Luke Bloy
* Marian Dovgialo+
* Marijn van Vliet
* Martin Schulz
* Mathieu Scheltienne+
* Mikołaj Magnuski
* Pierre-Antoine Bannier+
* Reza Shoorangiz+
* Richard Höchenberger
* Riessarius Stargardsky+
* Robert Luke
* Romain Derollepot+
* Ross Maddox
* Ryan Law+
* Stefan Appelhoff
* Steve Matindi+
* Timothy Gates+
* Valerii Chirkov
* Xiaokai Xia+
