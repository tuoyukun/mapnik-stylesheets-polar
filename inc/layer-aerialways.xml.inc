<Style name="aerialways">
    <Rule>
      <Filter>[aerialway] = 'cable_car' or [aerialway]='gondola'</Filter>
      &maxscale_zoom12;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/cable_car.png" type="png" width="28" height="3" />
    </Rule>
    <Rule>
      <Filter>[aerialway] = 'chair_lift' or [aerialway]='drag_lift'</Filter>
      &maxscale_zoom12;
      &minscale_zoom18;
      <LinePatternSymbolizer file="&symbols;/chair_lift.png" type="png" width="30" height="5" />
    </Rule>
</Style>

<Layer name="aerialways" status="on" srs="&osm2pgsql_projection;">
    <StyleName>aerialways</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,aerialway from &prefix;_line where aerialway is not null) as aerialways
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>